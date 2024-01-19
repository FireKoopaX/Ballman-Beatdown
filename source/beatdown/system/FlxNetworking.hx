package beatdown.system;

import sys.net.Host;
import sys.net.Socket;

class FlxNetworking
{
	var socket:Socket;

	public static var mode:String;

	public static function Connect(type:String, name:String, port:Int, connectionLimit:Int)
	{
		socket = new Socket();

		mode = type.toLowerCase();
		switch (mode)
		{
			case 'server':
				socket.bind(new Host(name), port);
				socket.listen(connectionLimit);
			case 'client':
				try
				{
					socket.connect(new Host(name), port);
					trace('SUCCESS: Connected to ${name + ':' + port}');
				}
				catch (e:Dynamic)
				{
					trace('ERROR: Could not connect to ${name + ':' + port}');
				}
		}
	}
}
