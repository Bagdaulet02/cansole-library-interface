# **LibInterface**

+-----------------------------------------------------------------+
| 			  [ Methods ]				  |
|Searching:							  |
|	by{XML: name~~author~~"tags" }				  |
|								  |
|EnteringNewBookInformation:					  |
|	EnteringInformationAboutNewBook{XML: name&&author&&"tags" |
|&&path }							  |
|								  |
|DeletingOldBookInformation:					  |
|	ErasingInformationAboutOldBook{XML: (name&&author)||path  |
|}								  |
|								  |
|EditingBookInformation:					  |
|	NewInfo{XML: name~~author~~"tags"~~path }		  |
|								  |
+-----------------------------------------------------------------+
