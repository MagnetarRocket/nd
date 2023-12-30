nd is inspired by the AEGIS nd, by default when not specified with a directory to store, it will always go to the user's home directory. However when set with a directory to go to, once invoked without arguments- it will magically "cd" it's way to there.

nd stores it's (single so far now) directory destination via [a exclusive clipboard!?](on amigaOS, the 256th clipboard is used unless someone points out that a pre-existing app uses it)

nd is a somewhat odd example of a terminate & stay resident app for what is a true multi-tasking system. But that's on purpose.

arguments for nd:

	none = go to "named directory"

	with a valid directory path = set "named directory"

	-p = show path of "named directory"

	-c = clear named directory and reset to home.

nd uses standard errors for when somthing does go wrong.

at this point until someone decides to add them in, nd does not support multibyte character directories at the moment.

nd as standalone is not recomended to be used as a clipboard buffer.

Future or extention arguments (recomended standards for other implmentions)-

	using a number with these goes to the listed item if it exists:

	-pn = present name from list, no numbers specified shows all stored names

	-mn = modifiy name from list

	-sn = switch to name from list

	-cn = clear a name from list

	-ln = listing of all stored named directories