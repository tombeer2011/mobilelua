typedef unsigned short wchar;
typedef wchar wchar_t;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef char* MAString;
typedef void* MAWString;
typedef void* MAAddress;
typedef int MAHandle;
typedef int MAExtent;
typedef unsigned char byte;
typedef unsigned long ulong;
typedef int MAExtensionModule;
typedef int MAExtensionFunction;
typedef int MAAudioData;
typedef int MAAudioInstance;
// End of typedefs.
/// The image is copied unchanged.
#define TRANS_NONE 0

/// The image is rotated clockwise by 90 degrees.
#define TRANS_ROT90 5

/// The image is rotated clockwise by 180 degrees.
#define TRANS_ROT180 3

/// The image is rotated clockwise by 270 degrees.
#define TRANS_ROT270 6

/// The image is reflected about its vertical center.
#define TRANS_MIRROR 2

/// The image is reflected about its vertical center, then rotated clockwise by 90 degrees.
#define TRANS_MIRROR_ROT90 7

/// The image is reflected about its vertical center, then rotated clockwise by 180 degrees.
#define TRANS_MIRROR_ROT180 1

/// The image is reflected about its vertical center, then rotated clockwise by 270 degrees.
#define TRANS_MIRROR_ROT270 4

/// This handle refers to the back buffer, which is initially black.
#define HANDLE_SCREEN 0

#define HANDLE_LOCAL 0

#define RES_OUT_OF_MEMORY -1

#define RES_BAD_INPUT -2

#define RES_OK 1

#define MAS_CREATE_IF_NECESSARY 1

/// Generic error.
#define STERR_GENERIC -2

/// The storage medium is full.
#define STERR_FULL -3

/// The store does not exist.
#define STERR_NONEXISTENT -5

/// Generic error.
#define CONNERR_GENERIC -2

/// The maximum number of open connections allowed has been reached.
#define CONNERR_MAX -3

/// DNS resolution error.
#define CONNERR_DNS -4

/// Internal error. Please report any occurrences.
#define CONNERR_INTERNAL -5

/** \brief The connection was closed by the remote peer.
*
* Happens when HTTP servers finish sending data.
*/
#define CONNERR_CLOSED -6

/// You attempted to write to a read-only connection.
#define CONNERR_READONLY -7

/// The OS does not trust you enough to let you open this connection.
#define CONNERR_FORBIDDEN -8

/// No operation has been started yet.
#define CONNERR_UNINITIALIZED -9

/// The Content-Length header could not be found.
#define CONNERR_CONLEN -10

/// You supplied a malformed URL.
#define CONNERR_URL -11

/// The protocol is not available.
/// If a Bluetooth function returns this, the Bluetooth chip is turned off.
#define CONNERR_UNAVAILABLE -12

/// You canceled the operation.
#define CONNERR_CANCELED -13

/// The server gave an invalid response.
#define CONNERR_PROTOCOL -14

/// The network connection could not be established.
#define CONNERR_NETWORK -15

/// The requested header could not be found.
#define CONNERR_NOHEADER -16

/// The requested object could not be found.
#define CONNERR_NOTFOUND -17

/// An error occurred during SSL negotiation.
#define CONNERR_SSL -18

/**
* If you wish to share the CONNERR codespace,
* use values below this for your own error codes.
*/
#define CONNERR_USER -1000000

#define CONNOP_READ 1

#define CONNOP_WRITE 2

#define CONNOP_CONNECT 7

#define CONNOP_FINISH 11

#define CONNOP_ACCEPT 16

/// The maximum number of open connections allowed.
#define CONN_MAX 32

#define BTADDR_LEN 6

#define CONN_FAMILY_INET4 1

#define CONN_FAMILY_BT 2

#define HTTP_GET 1

#define HTTP_POST 2

#define HTTP_HEAD 3

#define HTTP_PUT 4

#define HTTP_DELETE 5

#define MA_RESOURCE_OPEN 0x1

#define MA_RESOURCE_CLOSE 0x2

#define MAK_UNKNOWN 0

#define MAK_FIRST 0

#define MAK_BACKSPACE 8

#define MAK_TAB 9

#define MAK_CLEAR 12

#define MAK_RETURN 13

#define MAK_PAUSE 19

#define MAK_ESCAPE 27

#define MAK_SPACE 32

#define MAK_EXCLAIM 33

#define MAK_QUOTEDBL 34

#define MAK_POUND 35

#define MAK_HASH 35

#define MAK_GRID 35

#define MAK_DOLLAR 36

#define MAK_AMPERSAND 38

#define MAK_QUOTE 39

#define MAK_LEFTPAREN 40

#define MAK_RIGHTPAREN 41

#define MAK_ASTERISK 42

#define MAK_STAR 42

#define MAK_PLUS 43

#define MAK_COMMA 44

#define MAK_MINUS 45

#define MAK_PERIOD 46

#define MAK_SLASH 47

#define MAK_0 48

#define MAK_1 49

#define MAK_2 50

#define MAK_3 51

#define MAK_4 52

#define MAK_5 53

#define MAK_6 54

#define MAK_7 55

#define MAK_8 56

#define MAK_9 57

#define MAK_COLON 58

#define MAK_SEMICOLON 59

#define MAK_LESS 60

#define MAK_EQUALS 61

#define MAK_GREATER 62

#define MAK_QUESTION 63

#define MAK_AT 64

#define MAK_LEFTBRACKET 91

#define MAK_BACKSLASH 92

#define MAK_RIGHTBRACKET 93

#define MAK_CARET 94

#define MAK_UNDERSCORE 95

#define MAK_BACKQUOTE 96

#define MAK_A 97

#define MAK_B 98

#define MAK_C 99

#define MAK_D 100

#define MAK_E 101

#define MAK_F 102

#define MAK_G 103

#define MAK_H 104

#define MAK_I 105

#define MAK_J 106

#define MAK_K 107

#define MAK_L 108

#define MAK_M 109

#define MAK_N 110

#define MAK_O 111

#define MAK_P 112

#define MAK_Q 113

#define MAK_R 114

#define MAK_S 115

#define MAK_T 116

#define MAK_U 117

#define MAK_V 118

#define MAK_W 119

#define MAK_X 120

#define MAK_Y 121

#define MAK_Z 122

#define MAK_DELETE 127

#define MAK_KP0 256

#define MAK_KP1 257

#define MAK_KP2 258

#define MAK_KP3 259

#define MAK_KP4 260

#define MAK_KP5 261

#define MAK_KP6 262

#define MAK_KP7 263

#define MAK_KP8 264

#define MAK_KP9 265

#define MAK_KP_PERIOD 266

#define MAK_KP_DIVIDE 267

#define MAK_KP_MULTIPLY 268

#define MAK_KP_MINUS 269

#define MAK_KP_PLUS 270

#define MAK_KP_ENTER 271

#define MAK_KP_EQUALS 272

#define MAK_UP 273

#define MAK_DOWN 274

#define MAK_RIGHT 275

#define MAK_LEFT 276

#define MAK_INSERT 277

#define MAK_HOME 278

#define MAK_END 279

#define MAK_PAGEUP 280

#define MAK_PAGEDOWN 281

#define MAK_FIRE 284

#define MAK_SOFTLEFT 285

#define MAK_SOFTRIGHT 286

#define MAK_PEN 291

#define MAK_BACK 292

#define MAK_MENU 293

#define MAK_RSHIFT 303

#define MAK_LSHIFT 304

#define MAK_RCTRL 305

#define MAK_LCTRL 306

#define MAK_RALT 307

#define MAK_LALT 308

#define MAK_SEARCH 309

#define MAKB_LEFT 0x00001

#define MAKB_UP 0x00002

#define MAKB_RIGHT 0x00004

#define MAKB_DOWN 0x00008

#define MAKB_FIRE 0x00010

#define MAKB_SOFTLEFT 0x00020

#define MAKB_SOFTRIGHT 0x00040

#define MAKB_0 0x00080

#define MAKB_1 0x00100

#define MAKB_2 0x00200

#define MAKB_3 0x00400

#define MAKB_4 0x00800

#define MAKB_5 0x01000

#define MAKB_6 0x02000

#define MAKB_7 0x04000

#define MAKB_8 0x08000

#define MAKB_9 0x10000

#define MAKB_ASTERISK 0x20000

#define MAKB_STAR 0x20000

#define MAKB_HASH 0x40000

#define MAKB_POUND 0x40000

#define MAKB_GRID 0x40000

#define MAKB_CLEAR 0x80000

#define EVENT_BUFFER_SIZE 256

/// In milliseconds
#define EVENT_CLOSE_TIMEOUT 2000

/**
* This event is posted when the operating system sends MoSync a command to exit.
* Causes include the OS shutting down and OS-controlled user commands.
* \see maGetEvent()
*/
#define EVENT_TYPE_CLOSE 1

#define EVENT_TYPE_KEY_PRESSED 2

#define EVENT_TYPE_KEY_RELEASED 3

/// Connection
#define EVENT_TYPE_CONN 4

/// Bluetooth discovery
#define EVENT_TYPE_BT 5

#define EVENT_TYPE_POINTER_PRESSED 8

#define EVENT_TYPE_POINTER_RELEASED 9

#define EVENT_TYPE_POINTER_DRAGGED 10

/**
 * While MoSync doesn't have focus, no key events will arrive and the screen will not be updated.
 * If the keypad is locked, no application will have focus.
 * \see maLockKeypad
 */
#define EVENT_TYPE_FOCUS_LOST 13

#define EVENT_TYPE_FOCUS_GAINED 14

/// Has MAEvent::data point to an MALocation.
#define EVENT_TYPE_LOCATION 16

/// MAEvent::state is one of the \link #MA_LPS_AVAILABLE MA_LPS \endlink constants.
#define EVENT_TYPE_LOCATION_PROVIDER 17

/**
* \brief Event which is triggered when an audio has been asychronous prepared
* The MAEvent::audioInstance contains the prepared MAAudioInstance,
* or <0 if a problem happened while preparing.
*/
#define EVENT_TYPE_AUDIO_PREPARED 19

/**
* \brief Event which is triggered when a streaming audio has finished playing
* The MAEvent::audioInstance contains the MAAudioInstance which finished
*/
#define EVENT_TYPE_AUDIO_COMPLETED 20

/** \brief The size of the screen has changed.
* Use maGetScrSize() to get the new size.
*
* If the screen is the current draw target, the clipping rectangle is removed.
* Use maSetClipRect() to reset it.
*/
#define EVENT_TYPE_SCREEN_CHANGED 21

/// Character input. Uses MAEvent::character.
#define EVENT_TYPE_CHAR 22

/** \brief The text box created by maTextBox() was just closed.
* Uses MAEvent::textboxResult and MAEvent::textboxLength.
*/
#define EVENT_TYPE_TEXTBOX 23

/** \brief The home screen became visible.
 * Currently implemented only on Android and Symbian.
 * \see maHomeScreenEventsOn()
 */
#define EVENT_TYPE_HOMESCREEN_SHOWN 24

/** \brief The home screen was hidden because an
 * application came to front.
 * Currently implemented only on Android and Symbian.
 * \see maHomeScreenEventsOn()
 */
#define EVENT_TYPE_HOMESCREEN_HIDDEN 25

/** \brief The screen was turned on (the device
 * went out of sleep state).
 * Currently implemented only on Android.
 * \see maScreenActivateEventsOn()
 */
#define EVENT_TYPE_SCREEN_STATE_ON 26

/** \brief The screen was turned off (the device
 * went into sleep state).
 * Currently implemented only on Android.
 * \see maScreenActivateEventsOn()
 */
#define EVENT_TYPE_SCREEN_STATE_OFF 27

/**
* \brief An event sent from a native widget.
* \par The application can use the MAEvent.data field to access
* widget event data, which is of type MAWidgetEventData.
* For example: \n
* \code MAWidgetEventData* widgetEventData = (MAWidgetEventData*) event.data; \endcode
* \see MAWidgetEventData
*/
#define EVENT_TYPE_WIDGET 28

/** \brief The bluetooth chip was turned off.
* Bluetooth functions will return #CONNERR_UNAVAILABLE.
* Currently implemented only on Android.
*/
#define EVENT_TYPE_BLUETOOTH_TURNED_OFF 29

/** \brief The bluetooth chip was turned on.
* Bluetooth functions will now work normally again.
* Currently implemented only on Android.
*/
#define EVENT_TYPE_BLUETOOTH_TURNED_ON 30

/**
* \brief The ImagePicker dialog was dismissed either by Cancel, either by OK.
*/
#define EVENT_TYPE_IMAGE_PICKER 31

/** \brief SMS result message.
* The field status contains one of the
* This event is sent on Android and iOS.
*/
#define EVENT_TYPE_SMS 32

/**
* \brief Provides data from active sensors.
* \see MAEvent::sensor
* \see maSensorStart()
*/
#define EVENT_TYPE_SENSOR 33

/**
* \brief The maAlert message box was dismissed by one of the available buttons.
* See #EVENT_TYPE_ALERT for the event.
*/
#define EVENT_TYPE_ALERT 34

/** \brief A new NFC tag was received
* A new tag has been received, use maGetNextTag to
* retreive it.
*/
#define EVENT_TYPE_NFC_TAG_RECEIVED 35

/** \brief New tag data was read
* An asynchronous NFC tag read operation was
* completed.
*/
#define EVENT_TYPE_NFC_TAG_DATA_READ 36

/** \brief New tag data was written
* An asynchronous NFC tag write operation was
* completed.
*/
#define EVENT_TYPE_NFC_TAG_DATA_WRITTEN 37

/** \brief A batch operation was performed
*/
#define EVENT_TYPE_NFC_BATCH_OP 38

/** \brief Tag authentication was performed
* An asynchronous NFC tag authentication read was
* completed.
*/
#define EVENT_TYPE_NFC_TAG_AUTH_COMPLETE 39

/**
* \brief Tag was made read only
*  An asynchronous NFC tag read only operation was completed.
*/
#define EVENT_TYPE_NFC_TAG_READ_ONLY 40

/**
* Send by maOptionsBox dialog when one of the option buttons is clicked.
*/
#define EVENT_TYPE_OPTIONS_BOX_BUTTON_CLICKED 41

/**
* \brief Send by a banner ad.
*/
#define EVENT_TYPE_ADS_BANNER 42

/**
* \brief Send when the application receives a local notification.
*/
#define EVENT_TYPE_LOCAL_NOTIFICATION 43

/**
* \brief Send when the application receives a registration result.
* The application tries to register to Apple Push Service, or Google GCM/C2DM Service,
* and the received result ( either success, either fail) is sending this event.
* After this event is received, get the result of the registration request by
* calling maNotificationPushGetRegistration.
*/
#define EVENT_TYPE_PUSH_NOTIFICATION_REGISTRATION 44

/**
* \brief Send when the application receives an unregistration result.
* The application unregistered from Google GCM/C2DM Service, and will not
* receive anymore push messages.
* Platform: Android only.
*/
#define EVENT_TYPE_PUSH_NOTIFICATION_UNREGISTRATION 45

/**
* \brief Send when the application receives a push notification.
*/
#define EVENT_TYPE_PUSH_NOTIFICATION 46

/**
* \brief Send before the Native Image Picker is dismissed.
* This event will contain a MACaptureEventData struct.
*/
#define EVENT_TYPE_CAPTURE 47

/**
* \brief Send by the Purchase API.
* This event will contain a MAPurchaseEventData struct.
*/
#define EVENT_TYPE_PURCHASE 48

/** \brief The telephone network status changed.
* MAEvent::state is the new state,
* one of the \link #MA_NETWORK_UNKNOWN MA_NETWORK \endlink constants.
*/
#define EVENT_TYPE_NETWORK 49

/// The MoSync Reference Environment, also known as the Emulator.
#define RUNTIME_MORE 1

/// Java ME
#define RUNTIME_JAVA 2

/// Symbian
#define RUNTIME_SYMBIAN 3

/// Windows CE, also known as Windows Mobile.
#define RUNTIME_WINCE 4

/// Caused by a MoSync Panic. MAPanicReport::code is the panic code.
#define REPORT_PANIC 1

/// Caused by a native exception. MAPanicReport::string describes the exception.
#define REPORT_EXCEPTION 2

/// Caused by a platform-specific error. MAPanicReport::code is valid.
#define REPORT_PLATFORM_CODE 3

/// Caused by a call to maPanic(). MAPanicReport::code and MAPanicReport::string are the
/// parameters from the call.
#define REPORT_USER_PANIC 4

/// Caused by the Close event timeout. Neither code or string are valid.
#define REPORT_TIMEOUT 5

#define MA_EXTENSION_MODULE_UNAVAILABLE -1

#define MA_EXTENSION_FUNCTION_UNAVAILABLE -1

#define FONT_TYPE_SERIF 0

#define FONT_TYPE_SANS_SERIF 1

#define FONT_TYPE_MONOSPACE 2

#define FONT_STYLE_NORMAL 0

#define FONT_STYLE_BOLD 1

#define FONT_STYLE_ITALIC 2

/**
* The available result codes for fonts.
*/
/**
* \brief Indicates that the call to a font syscall was successful.
*/
#define RES_FONT_OK 1

/**
* \brief Indicates that an invalid font handle was passed.
*/
#define RES_FONT_INVALID_HANDLE -1

/**
* \brief Indicates that the index was off the list size.
*/
#define RES_FONT_INDEX_OUT_OF_BOUNDS -2

/**
* \brief Indicates that a default font with that combination does not exist.
*/
#define RES_FONT_NO_TYPE_STYLE_COMBINATION -3

/**
* \brief Indicates that there is no font with that name on the device.
*/
#define RES_FONT_NAME_NONEXISTENT -4

/**
* \brief Indicates that maFontGetCount() was not called first.
*/
#define RES_FONT_LIST_NOT_INITIALIZED -5

/**
* \brief Indicates that the buffer is not big enough to store the font name.
*/
#define RES_FONT_INSUFFICIENT_BUFFER -6

/**
* \brief Indicates that an invalid size was passed.
*/
#define RES_FONT_INVALID_SIZE -7

/**
* \brief Indicates that the font cannot be deleted because it is in use.
*  maFontDelete(handle)  fails with this return code.
*/
#define RES_FONT_DELETE_DENIED -8

#define MA_LOC_NONE 1

#define MA_LOC_INVALID 2

#define MA_LOC_UNQUALIFIED 3

#define MA_LOC_QUALIFIED 4

/**
* Availability status code: the location provider is available.
*/
#define MA_LPS_AVAILABLE 1

/**
* Availability status code: the location provider is temporarily unavailable.
* Temporary unavailability means that the method is unavailable due to reasons
* that can be expected to possibly change in the future and the provider to
* become available. An example is not being able to receive the signal because
* the signal used by the location method is currently being obstructed,
* e.g. when deep inside a building for satellite based methods.
* However, a very short transient obstruction of the signal should not cause
* the provider to toggle quickly between TEMPORARILY_UNAVAILABLE and AVAILABLE.
*/
#define MA_LPS_TEMPORARILY_UNAVAILABLE 2

/**
* Availability status code: the location provider is out of service.
* Being out of service means that the method is unavailable and the implementation
* is not able to expect that this situation would change in the near future.
* An example is when using a location method implemented in an external device and
* the external device is detached.
*/
#define MA_LPS_OUT_OF_SERVICE 3

#define MA_ACCESS_READ 1

#define MA_ACCESS_READ_WRITE 3

/// Beginning of file.
#define MA_SEEK_SET 0

/// Current position.
#define MA_SEEK_CUR 1

/// End of file.
#define MA_SEEK_END 2

/// Don't sort the files.
#define MA_FL_SORT_NONE 0

/// Sort the files by date. See maFileDate().
#define MA_FL_SORT_DATE 1

/// Sort the files by name. Case-sensitive?
#define MA_FL_SORT_NAME 2

/// Sort the files by size. See maFileSize().
#define MA_FL_SORT_SIZE 3

/// Oldest / smallest / A first.
#define MA_FL_ORDER_ASCENDING 0x10000

/// Newest / biggest / Z first.
#define MA_FL_ORDER_DESCENDING 0x20000

#define MA_FERR_GENERIC -2

#define MA_FERR_NOTFOUND -3

#define MA_FERR_FORBIDDEN -4

#define MA_FERR_RENAME_FILESYSTEM -5

#define MA_FERR_RENAME_DIRECTORY -6

#define MA_FERR_WRONG_TYPE -7

/// The sorting method requested is unsupported on the current platform.
#define MA_FERR_SORTING_UNSUPPORTED -8

/**
* Values for the status field in the #EVENT_TYPE_SMS event.
* This event is sent on Android and iOS.
* Note: On iOS platforms the MA_SMS_RESULT_DELIVERED message corresponds
* To the SMS being successfully queued by the system. There is no way to
* know if it was actually delivered.
*/
/// The SMS was sent.
#define MA_SMS_RESULT_SENT 1

/// The SMS was NOT sent.
#define MA_SMS_RESULT_NOT_SENT 2

/// The SMS was delivered.
#define MA_SMS_RESULT_DELIVERED 3

/// The SMS was NOT delivered.
#define MA_SMS_RESULT_NOT_DELIVERED 4

#define MA_NETWORK_UNKNOWN 0

#define MA_NETWORK_NO_SERVICE 1

#define MA_NETWORK_EMERGENCY_ONLY 2

#define MA_NETWORK_SEARCHING 3

#define MA_NETWORK_BUSY 4

/**
* Your operator's home network. Data connections are possible here.
*/
#define MA_NETWORK_HOME 5

#define MA_NETWORK_DENIED 6

/**
* You're abroad. Data connections are possible here, but usually, extremely expensive.
* Avoid making any connections unless you have WLAN access,
* or the user is very sure of the cost.
*/
#define MA_NETWORK_ROAMING 7

/** The default. Connects to the IAP saved by maIapSave(), or,
* if there is no saved IAP, opens the IAP selection dialog.
*/
#define MA_IAP_METHOD_STANDARD 1

/**
* Connects to the WLAN IAP with the highest signal strength.
*/
#define MA_IAP_METHOD_WLAN 2

/// All IAPs except WLAN.
#define MA_IAP_FILTER_NOT_WLAN 1

/// Only WLAN IAPs.
#define MA_IAP_FILTER_WLAN 2

/// All IAPs. This is the default.
#define MA_IAP_FILTER_ALL 3

/**
* @brief A constant that represents the flash being on.
*/
#define MA_CAMERA_CONST_BACK_CAMERA 0

/**
* @brief A constant that represents the flash being in the automatic mode.
*/
#define MA_CAMERA_CONST_FRONT_CAMERA 1

/**
* @brief A constant that represents successful camera operation.
*/
#define MA_CAMERA_RES_OK 1

/**
* @brief A constant that represents a failed camera operation.
*/
#define MA_CAMERA_RES_FAILED -2

/**
* @brief A constant that represents a camera failing to start.
*/
#define MA_CAMERA_RES_NOT_STARTED -3

/**
* @brief A constant that represents a property not supported by the device.
*/
#define MA_CAMERA_RES_PROPERTY_NOTSUPPORTED -4

/**
* @brief A constant that represents an invalid value for that property.
*/
#define MA_CAMERA_RES_INVALID_PROPERTY_VALUE -5

/**
* @brief A constant that represents a property value not supported by the device.
*/
#define MA_CAMERA_RES_VALUE_NOTSUPPORTED -6

/**
* @brief A constant that represents the flash being on.
*/
#define MA_CAMERA_FLASH_ON "on"

/**
* @brief A constant that represents the flash being in the automatic mode.
*/
#define MA_CAMERA_FLASH_AUTO "auto"

/**
* @brief A constant that represents the flash being off.
*/
#define MA_CAMERA_FLASH_OFF "off"

/**
* @brief A constant that represents the flash being in the torch mode.
*/
#define MA_CAMERA_FLASH_TORCH "torch"

/**
* @brief A constant that represents the focus mode being automatic.
*/
#define MA_CAMERA_FOCUS_AUTO "auto"

/**
* @brief A constant that turns the camera to focus to infinity.
*/
#define MA_CAMERA_FOCUS_INFINITY "infinity"

/**
* @brief A constant that turns the camera to macro mode.
*/
#define MA_CAMERA_FOCUS_MACRO "macro"

/**
* @brief A constant that sets the camera to fixed focus mode.
*/
#define MA_CAMERA_FOCUS_FIXED "fixed"

/**
* @brief A constant that represents JPEG image format.
*/
#define MA_CAMERA_IMAGE_JPEG "jpeg"

/**
* @brief A constant that represents RAW image format.
*/
#define MA_CAMERA_IMAGE_RAW "raw"

/**
* @brief Sets the flash mode for the camera.
*
* @validvalue can be one of the #MA_CAMERA_FLASH_ON, #MA_CAMERA_FLASH_OFF, #MA_CAMERA_FLASH_AUTO, #MA_CAMERA_FLASH_TORCH constants
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_FLASH_MODE, MA_CAMERA_FLASH_AUTO);
* \endcode
*/
#define MA_CAMERA_FLASH_MODE "flash-mode"

/**
* @brief Sets the focus mode for the camera.
*
* @validvalue can be one of the #MA_CAMERA_FOCUS_AUTO, #MA_CAMERA_FOCUS_INFINITY, #MA_CAMERA_FOCUS_MACRO, #MA_CAMERA_FOCUS_FIXED constants
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_FOCUS_MODE, MA_CAMERA_FOCUS_AUTO);
* \endcode
*/
#define MA_CAMERA_FOCUS_MODE "focus-mode"

/**
* @brief Sets the image format for the camera.
*
* @validvalue can be one of the #MA_CAMERA_IMAGE_JPEG, #MA_CAMERA_IMAGE_RAW constants
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_IMAGE_FORMAT, MA_CAMERA_IMAGE_JPEG);
* \endcode
*/
#define MA_CAMERA_IMAGE_FORMAT "image-format"

/**
* @brief Sets the zoom level for the camera.
*
* @validvalue an int string that can be between 0 and #MA_CAMERA_MAX_ZOOM
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_ZOOM, "1");
* \endcode
*/
#define MA_CAMERA_ZOOM "zoom"

/**
* @brief Provides the information about the maximum supported zoom level on the device.
*
* @getonly
*
*/
#define MA_CAMERA_MAX_ZOOM "max-zoom"

/**
* @brief Indicates that if the device supports zoom or not.
*
* @validvalue the returned value is "true" for support and "false" for lack of support.
*
* @getonly
*/
#define MA_CAMERA_ZOOM_SUPPORTED "zoom-supported"

/**
* @brief Indicates that if the device has a flash or not.
*
* @validvalue the returned value is "true" for support and "false" for lack of support.
*
* @getonly
*/
#define MA_CAMERA_FLASH_SUPPORTED "flash-supported"

/// The user is allowed to enter any text, including line breaks.
#define MA_TB_TYPE_ANY 0

/// The user is allowed to enter an e-mail address.
#define MA_TB_TYPE_EMAILADDR 1

/// The user is allowed to enter an integer value.
#define MA_TB_TYPE_NUMERIC 2

/// The user is allowed to enter a phone number.
#define MA_TB_TYPE_PHONENUMBER 3

/// The user is allowed to enter a URL.
#define MA_TB_TYPE_URL 4

/// The user is allowed to enter a real number value.
/// This extends #MA_TB_TYPE_NUMERIC by allowing a decimal point.
#define MA_TB_TYPE_DECIMAL 5

/** \brief The user is allowed to enter any text, except for line breaks.
* Unavailable on some platforms.
* In that case, maTextBox() will return #MA_TB_RES_TYPE_UNAVAILABLE.
* You can use #MA_TB_TYPE_ANY instead.
*/
#define MA_TB_TYPE_SINGLE_LINE 100

/** Use this to separate types from flags in the \a constraints parameter.
* This is not a valid type value.
*/
#define MA_TB_TYPE_MASK 0xFFFF

/// The user chose OK.
#define MA_TB_RES_OK 1

/// The user chose Cancel.
#define MA_TB_RES_CANCEL 2

/// The specified type is unavailable on this platform.
#define MA_TB_RES_TYPE_UNAVAILABLE -3

/// Indicates that the text entered is confidential data that should be
/// obscured whenever possible.
/// This implies #MA_TB_FLAG_SENSITIVE.
#define MA_TB_FLAG_PASSWORD 0x10000

/// Indicates that editing is disallowed.
#define MA_TB_FLAG_UNEDITABLE 0x20000

/// Indicates that the text entered is sensitive data that the implementation
/// must never store into a dictionary or table for use in predictive, auto-completing,
/// or other accelerated input schemes. A credit card number is an example of sensitive data.
#define MA_TB_FLAG_SENSITIVE 0x40000

/// Indicates that the text entered does not consist of words that are likely
/// to be found in dictionaries typically used by predictive input schemes.
#define MA_TB_FLAG_NON_PREDICTIVE 0x80000

/// This flag is a hint to the implementation that during text editing,
/// the initial letter of each word should be capitalized.
#define MA_TB_FLAG_INITIAL_CAPS_WORD 0x100000

/// This flag is a hint to the implementation that during text editing,
/// the initial letter of each sentence should be capitalized.
#define MA_TB_FLAG_INITIAL_CAPS_SENTENCE 0x200000

/// A persistent notification that will launch the
/// application when selected.
#define NOTIFICATION_TYPE_APPLICATION_LAUNCHER 1

/// Landscape screen orientation.
#define SCREEN_ORIENTATION_LANDSCAPE 1

/// Portrait screen orientation.
#define SCREEN_ORIENTATION_PORTRAIT 2

/// Screen orientation is based on device sensor.
#define SCREEN_ORIENTATION_DYNAMIC 3

/// The device is in portrait mode, with the device held upright and the home button on
/// the bottom.
#define MA_SCREEN_ORIENTATION_PORTRAIT 0x000001

/// The device is in portrait mode but upside down, with the device held upright and the
/// home button at the top.
#define MA_SCREEN_ORIENTATION_PORTRAIT_UPSIDE_DOWN 0x000002

/// The device is in landscape mode, with the device held upright and the home button on
/// the left side.
#define MA_SCREEN_ORIENTATION_LANDSCAPE_LEFT 0x000004

/// The device is in landscape mode, with the device held upright and the home button on
/// the right side.
#define MA_SCREEN_ORIENTATION_LANDSCAPE_RIGHT 0x000008

///
#define MA_SCREEN_ORIENTATION_RES_OK 0

///
#define MA_SCREEN_ORIENTATION_RES_NOT_SUPPORTED -1

///
#define MA_SCREEN_ORIENTATION_RES_INVALID_VALUE -2

/// Application will run with screen on (consumes power).
#define MA_WAKE_LOCK_ON 1

/// Turn off the wake lock.
#define MA_WAKE_LOCK_OFF 2

#define SENSOR_TYPE_ACCELEROMETER 1

#define SENSOR_TYPE_MAGNETIC_FIELD 2

#define SENSOR_TYPE_ORIENTATION 3

#define SENSOR_TYPE_GYROSCOPE 4

#define SENSOR_TYPE_PROXIMITY 5

#define SENSOR_TYPE_COMPASS 6

#define SENSOR_RATE_FASTEST 0

#define SENSOR_RATE_GAME -1

#define SENSOR_RATE_NORMAL -2

#define SENSOR_RATE_UI -3

#define SENSOR_ERROR_NONE 0

#define SENSOR_ERROR_NOT_AVAILABLE -1

#define SENSOR_ERROR_INTERVAL_NOT_SET -2

#define SENSOR_ERROR_ALREADY_ENABLED -3

#define SENSOR_ERROR_NOT_ENABLED -4

#define SENSOR_ERROR_CANNOT_DISABLE -5

#define UIDEVICE_ORIENTATION_UNKNOWN 0

#define UIDEVICE_ORIENTATION_PORTRAIT 1

#define UIDEVICE_ORIENTATION_PORTRAIT_UPSIDE_DOWN 2

#define UIDEVICE_ORIENTATION_LANDSCAPE_LEFT 3

#define UIDEVICE_ORIENTATION_LANDSCAPE_RIGHT 4

#define UIDEVICE_ORIENTATION_FACE_UP 5

#define UIDEVICE_ORIENTATION_FACE_DOWN 6

#define SENSOR_PROXIMITY_VALUE_FAR 0

#define SENSOR_PROXIMITY_VALUE_NEAR 1

/**
* A constant indicating there is no NFC support on the device.
*/
#define MA_NFC_NOT_AVAILABLE -1

/**
* A constant indicating NFC is not enabled on the device. (But there is hardware support).
*/
#define MA_NFC_NOT_ENABLED -2

/**
* A constant indicating an invalid tag type.
*/
#define MA_NFC_INVALID_TAG_TYPE -2

/**
* An error code if tag connection is lost.
*/
#define MA_NFC_TAG_CONNECTION_LOST -3

/**
* An error code if trying to perform I/O on an unconnected
* tag.
*/
#define MA_NFC_TAG_NOT_CONNECTED -4

/**
* An error code used by maNFCWriteNDEF if maNFCWriteNDEF was
* performed on an NDEF_FORMATTABLE tag and failed.
*/
#define MA_NFC_FORMAT_FAILED -5

/**
* An error code if some general I/O error occurred,
* other than the special case of tag connection being lost.
*/
#define MA_NFC_TAG_IO_ERROR -127

/**
* Represents an NDEF (NFC Data Exchange Format) tag.
*/
#define MA_NFC_TAG_TYPE_NDEF 1

/**
* Represents a Mifare Classic tag.
*/
#define MA_NFC_TAG_TYPE_MIFARE_CL 2

/**
* Represents a Mifare Ultralight tag.
*/
#define MA_NFC_TAG_TYPE_MIFARE_UL 3

/**
* Represents an NfcA tag (ISO 14443-3A).
*/
#define MA_NFC_TAG_TYPE_NFC_A 4

/**
* Represents an NfcB tag (ISO 14443-3B).
*/
#define MA_NFC_TAG_TYPE_NFC_B 5

/**
* Represents an ISO-DEP tag (ISO 14443-4).
*/
#define MA_NFC_TAG_TYPE_ISO_DEP 6

/**
* Represents an 'abstract' tag that can
* accept requests for formatting it into
* an NDEF tag.
*/
#define MA_NFC_TAG_TYPE_NDEF_FORMATTABLE 128

/**
* Indicates the NDEF message is empty.
*/
#define MA_NFC_NDEF_TNF_EMPTY 0

/**
* Indicates the NDEF message is of a 'well-known' type;
* it may be further identified using the MA_NFC_NDEF_RTD_*
* constants.
*/
#define MA_NFC_NDEF_TNF_WELL_KNOWN 1

/**
* Indicates the NDEF message contains mime media;
* use maNFCGetType() to get the mime type.
*/
#define MA_NFC_NDEF_TNF_MIME_MEDIA 2

/**
* Indicates the NDEF message contains an absolute URI,
* the type conforming to RFC 3986.
*/
#define MA_NFC_NDEF_TNF_ABSOLUTE_URI 3

/**
* Indicates the type of the NDEF message being 'external'.
*/
#define MA_NFC_NDEF_TNF_EXTERNAL_TYPE 4

/**
* Indicates the contents of the NDEF message to be of
* an unknown type. The type of the NDEF message should
* be empty.
*/
#define MA_NFC_NDEF_TNF_UNKNOWN 5

/**
* Constant for chunked NDEF messages.
*/
#define MA_NFC_NDEF_TNF_UNCHANGED 6

/**
* Reserved constant.
*/
#define MA_NFC_NDEF_TNF_RESERVED 7

/**
* The A key for MiFare Classic authentication
*/
#define MA_NFC_MIFARE_KEY_A 1

/**
* The B key for MiFare Classic authentication
*/
#define MA_NFC_MIFARE_KEY_B 2

#define MA_DB_TYPE_NULL 1

#define MA_DB_TYPE_INT 2

#define MA_DB_TYPE_INT64 3

#define MA_DB_TYPE_DOUBLE 4

#define MA_DB_TYPE_BLOB 5

#define MA_DB_TYPE_DATA 6

#define MA_DB_TYPE_TEXT 7

/**
 * Status codes returned by the maDB functions.
 */
/**
 * Success return value.
 */
#define MA_DB_OK 0

/**
 * Error return value (-1 reserved for IOCtl not implemented).
 */
#define MA_DB_ERROR -2

/**
 * The cursor is beyond the last row
 * when calling #maDBCursorNext.
 */
#define MA_DB_NO_ROW -3

/**
 * A database field value was NULL when calling
 * the maDBCursorGetColumn* functions.
 */
#define MA_DB_NULL -4

#define MA_AUDIO_DATA_STREAM 1

#define MA_AUDIO_ERR_OK 0

#define MA_AUDIO_ERR_INVALID_INSTANCE -2

#define MA_AUDIO_ERR_INVALID_DATA -3

#define MA_AUDIO_ERR_INVALID_FILENAME -4

#define MA_AUDIO_ERR_INVALID_FILE -5

#define MA_AUDIO_ERR_STREAMING_NOT_SUPPORTED -6

#define MA_AUDIO_ERR_VOLUME_OUT_OF_RANGE -7

#define MA_AUDIO_ERR_POSITION_OUT_OF_RANGE -8

#define MA_AUDIO_ERR_INVALID_SOUND_FORMAT -9

#define MA_AUDIO_ERR_OUT_OF_MEMORY -10

#define MA_AUDIO_ERR_ALREADY_PREPARED -11

#define MA_AUDIO_ERR_PREPARE_FAILED -12

#define MA_AUDIO_ERR_IS_PLAYING -13

#define MA_AUDIO_ERR_GENERIC -14

/**
* @brief Indicates that the call was successful.
*/
#define MA_ADS_RES_OK 0

/**
* @brief Indicates that the call to a maAdsAddBannerToScreen or maAdsRemoveBannerFromScreen received
* an invalid layout handle.
*/
#define MA_ADS_RES_INVALID_LAYOUT_HANDLE -1

/**
* @brief Indicates that the call to a banner function received an invalid banner handle.
*/
#define MA_ADS_RES_INVALID_BANNER_HANDLE -2

/**
* @brief Indicates that the call to maAdsBannerSetProperty or maAdsBannerGetProperty received
* an invalid property name.
*/
#define MA_ADS_RES_INVALID_PROPERTY_NAME -3

/**
* @brief Indicates that the call to maAdsBannerSetProperty or maAdsBannerGetProperty received
* an invalid property value.
*/
#define MA_ADS_RES_INVALID_PROPERTY_VALUE -4

/**
* @brief Indicates that the call to maAdsBannerSetProperty needs a larger buffer.
*/
#define MA_ADS_RES_INVALID_STRING_BUFFER_SIZE -5

/**
* @brief Indicates that the call to an Ad syscall was unsuccessful.
*/
#define MA_ADS_RES_ERROR -6

/**
* @brief Indicates that ads are not supported on current platform.
*/
#define MA_ADS_RES_UNSUPPORTED -7

/**
* @brief Indicates that something happened internally: for instance, the Activity may have been destroyed mid-refresh.
* Platform: Android.
*/
#define MA_ADS_ERROR_INTERNAL -1

/**
* @brief Indicates that the ad request is invalid.
* Platform: Android.
*/
#define MA_ADS_ERROR_INVALID_REQUEST -2

/**
* @brief Indicates that the connection to the advertisements server failed.
* Platform: Android, iOS and Windows Phone 7.1.
*/
#define MA_ADS_ERROR_NETWORK -3

/**
* @brief Indicates that no ad was returned due to lack of ad inventory.
* Platform: Android, iOS and Windows Phone 7.1.
*/
#define MA_ADS_ERROR_NO_FILL -4

/**
* @brief Indicates that your application has not been configured to receive advertisements.
* Platform: iOS.
*/
#define MA_ADS_ERROR_CONFIGURATION -5

/**
* @brief Indicates that the banner is visible, but no advertisement is shown.
* Your application must always hide the banner when it does not have an advertisement to display.
* Platform: iOS.
*/
#define MA_ADS_ERROR_NO_CONTENT -6

/**
* @brief Indicates that ad content is not available because the application is not currently active.
* Platform: iOS.
*/
#define MA_ADS_ERROR_APPLICATION_INACTIVE -7

/**
* @brief Gets the height of the ads banner.
* The view will have no size until the ad is loaded.
*
* @validvalue an int.
*
* @getonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerGetProperty(MA_ADS_HEIGHT, buf);
* \endcode
*/
#define MA_ADS_HEIGHT "height"

/**
* @brief Gets the width of the ads banner.
* The view will have no size until the ad is loaded.
*
* @validvalue an int.
*
* @getonly
*
* @par Example
* \code
*    char buf[256];
*	maAdsBannerGetProperty(MA_ADS_WIDTH, buf);
* \endcode
*/
#define MA_ADS_WIDTH "width"

/**
* @brief Sets whether the banner is visible or not. Layouts ignore invisible widgets.
* The banner is visible by default.
*
* @validvalue A boolean string 'true' or 'false', where true is visible and false is invisible.
*
* @setandget
*
* @par Example
* \code
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_VISIBLE, "false");
* \endcode
*/
#define MA_ADS_VISIBLE "visible"

/**
* @brief Sets whether the banner is enabled or not. If disabled, the user cannot interact with it.
* Ads are enabled by default.
*
* @validvalue A boolean string 'true' or 'false', where true is enabled and false is disabled.
*
* @setandget
*
* @par Example
* \code
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_ENABLED, "false");
* \endcode
*/
#define MA_ADS_ENABLED "enabled"

/**
* @brief Sets the devices that are going to receive test ads only.
* You should utilize this property during development to avoid generating false impressions.
* Available only on Android.
*
* @validvalue String that holds the device ID.
*
* @setonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_TEST_DEVICE, "E83D20734F72FB3108F104ABC0FFC738"); // My T-Mobile G1 test phone
* \endcode
*/
#define MA_ADS_TEST_DEVICE "testDevice"

/**
* @brief Sets the request state of the ads.
* If set to true ads are starting to be requested, if set to false the request for ads is stopped.
* After requesting for content no other property setter will be taken into account.
* @validvalue A boolean string 'true' or 'false'.
* Available only on Android.
*
* @setonly
*
* @par Example
* \code
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_REQUEST_CONTENT, "true");
* \endcode
*/
#define MA_ADS_REQUEST_CONTENT "requestContent"

/**
* @brief Returns true if the ad is successfully loaded and is ready to be shown.
* Available only on Android.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @getonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerGetProperty(bannerHandle, MA_ADS_IS_READY, buf);
* \endcode
*/
#define MA_ADS_IS_READY "isReady"

/**
* @brief Sets the coloration of test ads, specifically the background color.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_BG, "0xAAAAFF");
* \endcode
*/
#define MA_ADS_COLOR_BG "colorBg"

/**
* @brief Sets the coloration of test ads,specifically the gradient background color at top.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_BG_TOP, "0xFFFFFF");
* \endcode
*/
#define MA_ADS_COLOR_BG_TOP "colorBgTop"

/**
* @brief Sets the coloration of test ads, specfiically the border color.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_BORDER, "0xFFFFFF");
* \endcode
*/
#define MA_ADS_COLOR_BORDER "colorBorder"

/**
* @brief Sets the coloration of test ads, specfiically the link text color.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_LINK, "0xFFFFFF");
* \endcode
*/
#define MA_ADS_COLOR_LINK "colorLink"

/**
* @brief Sets the coloration of test ads, specfiically the text color.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_TEXT, "0xFFFFFF");
* \endcode
*/
#define MA_ADS_COLOR_TEXT "colorText"

/**
* @brief Sets the coloration of test ads, specfiically the url color.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_URL, "0xFFFFFF");
* \endcode
*/
#define MA_ADS_COLOR_URL "colorUrl"

#define MA_ADS_SIZE_BANNER 0

#define MA_ADS_SIZE_RECT 1

#define MA_ADS_SIZE_IAB_BANNER 2

#define MA_ADS_SIZE_LEADERBOARD 3

#define MA_ADS_SIZE_WP7_XLARGE 4

#define MA_ADS_SIZE_WP7_XXLARGE 5

#define MA_ADS_EVENT_FAILED 0

#define MA_ADS_EVENT_LOADED 1

#define MA_ADS_EVENT_ON_DISMISS 2

#define MA_ADS_EVENT_ON_LEAVE_APPLICATION 3

/**
* @brief Indicates that the call was successful.
*/
#define MA_NOTIFICATION_RES_OK 0

/**
* @brief Indicates that the syscall received an invalid local notification handle.
*/
#define MA_NOTIFICATION_RES_INVALID_HANDLE -1

/**
* @brief Indicates that the call to maNotificationLocalSetProperty or maNotificationLocalGetProperty received
* an invalid property name.
*/
#define MA_NOTIFICATION_RES_INVALID_PROPERTY_NAME -3

/**
* @brief Indicates that the call to maNotificationLocalSetProperty or maNotificationLocalGetProperty received
* an invalid property value.
*/
#define MA_NOTIFICATION_RES_INVALID_PROPERTY_VALUE -4

/**
* @brief Indicates that the call to maNotificationLocalGetProperty or maNotificationPushGetData needs a larger buffer.
*/
#define MA_NOTIFICATION_RES_INVALID_STRING_BUFFER_SIZE -5

/**
* @brief Indicates that notifications are not supported on current platform.
*/
#define MA_NOTIFICATION_RES_UNSUPPORTED -6

/**
* @brief Indicates that maNotficationLocalSetProperty cannot be called after scheduling via
* maNotificationLocalSchedule, or that the call to maNotificationLocalSchedule failed because
* the notification was already scheduled.
*/
#define MA_NOTIFICATION_RES_ALREADY_SCHEDULED -7

/**
* @brief Indicates that the call to maNotificationLocalUnschedule failed because the notification
* was not scheduled.
*/
#define MA_NOTIFICATION_RES_CANNOT_UNSCHEDULE -8

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccessful because
* the application is already registered for receiving push notification.
*/
#define MA_NOTIFICATION_RES_ALREADY_REGISTERED -9

/**
* @brief Indicates that the call to maNotificationPushUnregister was unsuccessful because
* the application is not registered for receiving push notification.
*/
#define MA_NOTIFICATION_RES_NOT_REGISTERED -10

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccessful because
* the application did not finish processing a previous registration request.
*/
#define MA_NOTIFICATION_RES_REGISTRATION_IN_PROGRESS -11

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccesfull because the
* device can't read the response, or there was a 500/503 from the server that can be retried later.
* The application should use exponential back off and retry.
* Platform: Android only.
*/
#define MA_NOTIFICATION_RES_REGISTRATION_SERVICE_NOT_AVAILABLE -12

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccesfull because there is no
* Google account on the phone.
* The application should ask the user to open the account manager and add a Google account.
* Platform: Android only.
*/
#define MA_NOTIFICATION_RES_REGISTRATION_ACCOUNT_MISSING -13

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccesfull because the password was bad.
* The application should ask the user to enter his/her password, and let user retry manually later.
* Platform: Android only.
*/
#define MA_NOTIFICATION_RES_REGISTRATION_AUTHENTICATION_FAILED -14

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccesfull because the user has too many
* applications registered.
* The application should tell the user to uninstall some other applications, let user retry manually.
* Platform: Android only.
*/
#define MA_NOTIFICATION_RES_REGISTRATION_TOO_MANY_REGISTRATIONS -15

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccesfull because the sender account
* is not recognized.
* Platform: Android only.
*/
#define MA_NOTIFICATION_RES_REGISTRATION_INVALID_SENDER -16

/**
* @brief  Indicates that the call to maNotificationPushRegister was unsuccesfull because of incorrect
* phone registration with Google. This phone doesn't currently support GCM/C2DM.
* Platform: Android only.
*/
#define MA_NOTIFICATION_RES_REGISTRATION_PHONE_REGISTRATION_ERROR -17

/**
* @brief Indicates that the call to maNotificationPushGetRegistration needs a larger buffer.
*/
#define MA_NOTIFICATION_RES_REGISTRATION_MESSAGE_BUF_TOO_SMALL -18

/**
* @brief Indicates that the call to maNotificationPushGetRegistration occured before trying to register.
*/
#define MA_NOTIFICATION_RES_REGISTRATION_NOT_CALLED -19

/**
* @brief Indicates that the call to an notification syscall was unsuccessful.
*/
#define MA_NOTIFICATION_RES_ERROR -20

/**
* If set, the audio will be repeated until the notification is canceled or the
* notification window is opened.
* Platform: Android only.
*/
#define MA_NOTIFICATION_FLAG_INSISTENT 4

/**
* Should be set if the notification should not be canceled when the user clicks the
* Clear all button.
* Platform: Android only.
*/
#define MA_NOTIFICATION_FLAG_NO_CLEAR 32

/**
* Should be set if this notification represents a high-priority event that may be shown to
* the user even if notifications are otherwise unavailable (that is, when the status bar is hidden).
* Platform: Android only.
*/
#define MA_NOTIFICATION_FLAG_HIGH_PRIORITY 128

/**
* Should be set if the notification should be canceled when it is clicked by the user.
* Platform: Android only.
*/
#define MA_NOTIFICATION_FLAG_AUTO_CANCEL 16

/**
* For local notifications: if set, the incoming notifications will be displayed to
* the user only if the application is in background.
* For push notifications: if set, the incoming notifications will be displayed to
* the user only if the application is not in use.
* Note that the received push notification event will always be received regardless
* of this flag.
* This setting is enabled by default.
* Platform: Android only.
*/
#define MA_NOTIFICATION_DISPLAY_FLAG_DEFAULT 0

/**
* If set, all the incoming notification will be displayed to the user regardless of
* it's focus state.
* For local notifications: this means that the user will get the notifications when the
* application is in background, but also in foreground.
* For push notifications: this means that the user will get the notifications when the
* application is closed, but also when it's in use.
* Note that the  event will always be received regardless of this flag.
* Platform: Android only.
*/
#define MA_NOTIFICATION_DISPLAY_FLAG_ANYTIME 1

/**
* @brief The application accepts notifications that badge the application icon.
* Platform: iOS only.
*/
#define MA_NOTIFICATION_PUSH_TYPE_BADGE 1

/**
* @brief The application accepts alert sounds as notifications.
* Platform: iOS only.
*/
#define MA_NOTIFICATION_PUSH_TYPE_SOUND 2

/**
* @brief The application accepts alert messages as notifications.
* This is the only push notification type that is supported by
* both Android and iOS.
*/
#define MA_NOTIFICATION_PUSH_TYPE_ALERT 4

/**
* @brief Set the number displayed on the application's icon badge.
* Platform: iOS.
*
* @validvalue an int.
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*	maNotificationLocalGetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_BADGE_NUMBER, buf);
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_BADGE_NUMBER "badge_number"

/**
* @brief Set the date and time when the system should deliver the notification.
*
* @validvalue an int.
* The date is in seconds(UNIX time - seconds elapsed since January 1, 1970).
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*	maNotificationLocalGetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_FIRE_DATE, buf);
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_FIRE_DATE "fire_date"

/**
* @brief Set the message displayed in the notification alert.
* Platform: Android and iOS.
*
* @validvalue an string.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_CONTENT_BODY, "Did you forget something?");
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_CONTENT_BODY "content_body"

/**
* @brief Set the title of the action button or slider.
* Platform: iOS.
*
* @validvalue a string.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_ALERT_ACTION, "Show");
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_ALERT_ACTION "alert_action"

/**
* @brief Enable/disable the sound played when an alert is displayed.
* Platform: iOS and Android.
* If set to true, it will play the default sound.
*
* @validvalue "true" or "false" strings.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_PLAY_SOUND, "true");
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_PLAY_SOUND "play_sound"

/**
* @brief Set the sound to play when an alert is displayed.
* The sound file should be saved in a notifications folder under sdcard storage.
* Note that some devices can only play notification sounds stored in the internal storage,
* in the \system\media\audio\notifications folder.
* Platform: Android.
*
* @validvalue a valid path to an audio file.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_SOUND_PATH, "....");
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_SOUND_PATH "soundPath"

/**
* @brief Set the title that goes in the expanded entry of the notification.
* Platform: Android.
*
* @validvalue a string.
*
* @setandget
*
* @par Example
* \code
*     maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_CONTENT_TITLE, "My message");
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_CONTENT_TITLE "contentTitle"

/**
* @brief The text that flows by in the status bar when the notification first activates.
* Platform: Android.
*
* @validvalue a string.
*
* @setandget
*
* @par Example
* \code
*     maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_TICKER_TEXT, "You got new message");
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_TICKER_TEXT "tickerText"

/**
* @brief Set the flags applied to the local notification.
* Platform: Android.
*
* @validvalue One of the constants:
* - #MA_NOTIFICATION_FLAG_INSISTENT
* - #MA_NOTIFICATION_FLAG_AUTO_CANCEL
* - #MA_NOTIFICATION_FLAG_HIGH_PRIORITY
* - #MA_NOTIFICATION_FLAG_NO_CLEAR.
*
* @setonly
*
* @par Example
* \code
*     maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_FLAG, MA_NOTIFICATION_FLAG_AUTO_CANCEL);
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_FLAG "flag"

/**
* @brief Set the display flag applied to the local notification.
* Note the regardless of this flag, the #EVENT_TYPE_LOCAL_NOTIFICATION event will be received.
* Platform: Android.
*
* @validvalue One of the constants:
* - #MA_NOTIFICATION_DISPLAY_FLAG_DEFAULT Which is enabled by default.
* - #MA_NOTIFICATION_DISPLAY_FLAG_ANYTIME.
*
* @setonly
*
* @par Example
* \code
*    // Display the notification even when the application is in foreground.
*    maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_DISPLAY_FLAG, MA_NOTIFICATION_DISPLAY_FLAG_ANYTIME);
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_DISPLAY_FLAG "displayFlag"

/**
* @brief Enable/disable the the default vibration when an alert is displayed.
* Platform: Android only.
* If set to true, it will use the default notification vibrate. This will ignore any given vibrate.
* Using phone vibration requires the VIBRATE permission.
*
* @validvalue "true" or "false" strings.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_VIBRATE, "true");
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_VIBRATE "vibrate"

/**
* @brief Set the vibration duration when an alert is displayed.
* Platform: Android only.
* Using phone vibration requires the VIBRATE permission.
*
* @validvalue an int The number of milliseconds to vibrate.
*
* @setonly
*
* @par Example
* \code
*   // Vibrate for 3 seconds.
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_VIBRATE_DURATION, "3000");
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_VIBRATE_DURATION "vibrateDuration"

/**
* @brief Enable/Disable the default notification lights.
* This will ignore the #MA_NOTIFICATION_LOCAL_FLASH_LIGHTS_PATTERN.
* Not every color in the spectrum is supported by the device LEDs, and not every device supports the same
* colors, so the hardware estimates to the best of its ability. Green is the most common notification color.
* Platform: Android only.
*
* @validvalue "true" or "false" strings.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_FLASH_LIGHTS, "true");
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_FLASH_LIGHTS "flashLights"

/**
* @brief Define your own color and pattern for the lights.
* Not every color in the spectrum is supported by the device LEDs, and not every device supports the same
* colors, so the hardware estimates to the best of its ability. Green is the most common notification color.
* Also, not all Android devices support this feature.
* Platform: Android only.
*
* @validvalue An int array containing 3 values:
* - a value for the ledARGB field (for the color),
* - the ledOffMS field (length of time, in milliseconds, to keep the light off),
* - the ledOnMS (length of time, in milliseconds, to keep the light on).
*  returns #MA_NOTIFICATION_RES_ERROR if the current device doesn't support flashing LED.
* @setonly
*
* @par Example
* \code
* // In this example, the green light repeatedly flashes on for 300 milliseconds and turns off for one second.
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_FLASH_LIGHTS_PATTERN, "0xff00ff00,300,1000");
* \endcode
*/
#define MA_NOTIFICATION_LOCAL_FLASH_LIGHTS_PATTERN "flashLightsPattern"

/**
* @brief Indicates that the call was successful.
* Platform: Android and iOS.
*/
#define MA_CAPTURE_RES_OK 0

/**
* @brief The given file name is invalid.
* Platform: iOS.
*/
#define MA_CAPTURE_RES_FILE_INVALID_NAME -1

/**
* @brief The file already exists.
* Platform: iOS.
*/
#define MA_CAPTURE_RES_FILE_ALREADY_EXISTS -2

/**
* @brief Indicates that the call to maCaptureSetProperty or maCaptureGetProperty received
* an invalid property name.
* Platform: iOS and Android.
*/
#define MA_CAPTURE_RES_INVALID_PROPERTY -3

/**
* @brief Indicates that the call to maCaptureSetProperty or maCaptureGetProperty received
* an invalid property value.
* Platform: iOS and Android.
*/
#define MA_CAPTURE_RES_INVALID_PROPERTY_VALUE -4

/**
* @brief Indicates that the call to maCaptureGetProperty needs a larger buffer.
* Platform: iOS and Android.
*/
#define MA_CAPTURE_RES_INVALID_STRING_BUFFER_SIZE -5

/**
* @brief Indicates that the call to maCaptureAction received an invalid action type.
* Platform: iOS and Android.
*/
#define MA_CAPTURE_RES_INVALID_ACTION -6

/**
* @brief Indicates that the call to maCaptureDestroyData received an invalid handle.
* Platform: iOS and Android.
*/
#define MA_CAPTURE_RES_INVALID_HANDLE -7

/**
* @brief Indicates that capture is not supported on current platform.
* Platform: iOS.
*/
#define MA_CAPTURE_RES_UNSUPPORTED -8

/**
* @brief Indicates that camera is not available at the moment.
* Platform: iOS.
*/
#define MA_CAPTURE_RES_CAMERA_NOT_AVAILABLE -9

/**
* @brief Indicates that video recording is not supported.
* Platform: iOS.
*/
#define MA_CAPTURE_RES_VIDEO_NOT_SUPPORTED -10

/**
* @brief Indicates that camera picture mode is not supported.
* Platform: iOS.
*/
#define MA_CAPTURE_RES_PICTURE_NOT_SUPPORTED -11

/**
* @brief Indicates that flash mode is not supported.
* Platform: iOS.
*/
#define MA_CAPTURE_RES_FLASH_NOT_SUPPORTED -12

/**
* @brief Indicates that the recording max duration is not supported.
* Platform: Android.
*/
#define MA_CAPTURE_RES_MAX_DURATION_NOT_SUPPORTED -13

/**
* @brief Indicates that a call to maCaptureGetProperty was unsuccessfull
* because the property was not previously set.
* Platform: Android.
*/
#define MA_CAPTURE_RES_PROPERTY_VALUE_UNDEFINED -14

/**
* @brief Maximum duration video that should be recorded, in seconds.
* Platform: Android and iOS.
*
* @validvalue Positive integer value.
* Default value is platform specific.
*
* On iOS the maximum duration is by defualt set to 600 seconds.
*
* On Android devices with API level lower than 8
* it returns #MA_CAPTURE_RES_MAX_DURATION_NOT_SUPPORTED.
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*   sprintf(buf, "%d", 100);
*	maCaptureSetProperty(MA_CAPTURE_MAX_DURATION, buf);
* \endcode
*/
#define MA_CAPTURE_MAX_DURATION "maxDuration"

/**
* @brief Set the video recording quality.
* Platform: Android and iOS.
* Android: Note that some devices the default camera either does not support low-res video capture,
* or it doesn't understand/process the MediaStore.EXTRA_SIZE_LIMIT correctly.
*
* @validvalue One of the \link #MA_CAPTURE_VIDEO_QUALITY_LOW MA_CAPTURE_VIDEO_QUALITY \endlink constants.
* iOS: Default value is MA_CAPTURE_VIDEO_QUALITY_MEDIUM.
* Android: Default value is MA_CAPTURE_VIDEO_QUALITY_HIGH.
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*   sprintf(buf, "%d", MA_CAPTURE_VIDEO_QUALITY_HIGH);
*	maCaptureSetProperty(MA_CAPTURE_VIDEO_QUALITY, buf);
* \endcode
*/
#define MA_CAPTURE_VIDEO_QUALITY "videoQuality"

/**
* @brief Store the recorded movie/taken photo to the user’s Camera Roll album.
* Platform: iOS.
*
* @validvalue "false" or "true".
* Default value: "true".
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*   sprintf(buf, "%s", "true");
*	maCaptureSetProperty(MA_CAPTURE_CAMERA_ROLL, buf);
* \endcode
*/
#define MA_CAPTURE_CAMERA_ROLL "cameraRoll"

/**
* @brief Set the flash mode used by the active camera.
* Platform: iOS.
*
* @validvalue One of the \link #MA_CAPTURE_FLASH_AUTO MA_CAPTURE_FLASH \endlink constants.
* Default value: #MA_CAPTURE_FLASH_AUTO.
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*   sprintf(buf, "%d", MA_CAPTURE_FLASH_OFF);
*	maCaptureSetProperty(MA_CAPTURE_FLASH, buf);
* \endcode
*/
#define MA_CAPTURE_FLASH "flash"

/**
* @brief Show/hide default camera controls.
* @brief Show/hide default camera controls.
* Platform: iOS.
*
* @validvalue "true" or "false".
* Default value: "true".
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*   sprintf(buf, "%s", "false");
*	maCaptureSetProperty(MA_CAPTURE_CAMERA_CONTROLS, buf);
* \endcode
*/
#define MA_CAPTURE_CAMERA_CONTROLS "cameraControls"

/// Use low-quality video recording.
/// Platform: iOS and Android.
#define MA_CAPTURE_VIDEO_QUALITY_LOW 0

/// The highest-quality video recording supported for the active camera on the device.
/// Platform: iOS and Android.
#define MA_CAPTURE_VIDEO_QUALITY_HIGH 1

/// Use medium-quality video recording.
/// Platform: iOS only.
#define MA_CAPTURE_VIDEO_QUALITY_MEDIUM 2

/// Starts video capture.
/// Platform: Android and iOS.
#define MA_CAPTURE_ACTION_RECORD_VIDEO 0

/// Stops recording.
/// Platform: iOS only.
#define MA_CAPTURE_ACTION_STOP_RECORDING 1

/// Starts image capture (takes photo).
/// Platform: Android and iOS.
#define MA_CAPTURE_ACTION_TAKE_PICTURE 2

/// Sent after a image has been taken.
/// Platform: Android and iOS.
#define MA_CAPTURE_EVENT_TYPE_IMAGE 0

/// Sent after a video has been taken.
/// Platform: Android and iOS.
#define MA_CAPTURE_EVENT_TYPE_VIDEO 1

/// Sent if the user cancels taking image/video.
/// Platform: iOS and Android.
#define MA_CAPTURE_EVENT_TYPE_CANCEL 2

/// Specifies that the device should consider ambient light conditions to automatically
/// determine whether or not to use flash illumination.
/// Platform: iOS.
#define MA_CAPTURE_FLASH_AUTO 0

/// Specifies that flash illumination is always on, no matter what the ambient light conditions are.
/// Platform: iOS.
#define MA_CAPTURE_FLASH_ON 1

/// Specifies that flash illumination is always off, no matter what the ambient light conditions are.
/// Platform: iOS.
#define MA_CAPTURE_FLASH_OFF 2

/**
        * \brief No error occurred.
        */
#define MA_PURCHASE_RES_OK 0

/**
        * \brief Indicates that in app-purchase is not available because the
* API version is not compatible or the user is not eligible to make
* in-app purchases (for example, the user resides in a country that
* prohibits in-app purchases).
* Platform: Android only.
        */
#define MA_PURCHASE_RES_UNAVAILABLE -1

/**
        * \brief Indicates that there was an error connecting with the Google Play application.
* Platform: Android.
        */
#define MA_PURCHASE_RES_CONNECTION_ERROR -2

/**
        * \brief Indicates that the #maPurchaseSupported() call failed because the Google Play
* application is out of date and needs to be updated. In this case, you can provide users
* with an error message that contains a link to the Updating Google Play Help topic.
* Platform: Android.
        */
#define MA_PURCHASE_RES_OUT_OF_DATE -3

/**
        * \brief
        */
#define MA_PURCHASE_RES_CLIENT_INVALID -4

/**
        * \brief
        */
#define MA_PURCHASE_RES_NOT_ALLOWED -5

/**
        * \brief Returned by the #maPurchaseSupported()  and #maPurchaseGetField()
        * syscalls if purchase is not allowed on the device.
        * Platform: Android and iOS.
        */
#define MA_PURCHASE_RES_DISABLED -6

/**
        * \brief Returned by the #maPurchaseGetName(), #maPurchaseVerifyReceipt(),
* #maPurchaseGetField() or #maPurchaseDestroy() syscalls if the productHandle is invalid.
* Platform: Android and iOS.
        */
#define MA_PURCHASE_RES_INVALID_HANDLE -7

/**
        * \brief Returned by the #maPurchaseGetName() syscall if the the given buffer is
        * too small.
* Platform: Android and iOS.
        */
#define MA_PURCHASE_RES_BUFFER_TOO_SMALL -8

/**
        * \brief Returned by the #maPurchaseGetField() syscall if the receipt has not been
        * received or if the transaction is invalid.
        */
#define MA_PURCHASE_RES_RECEIPT_NOT_AVAILABLE -9

/**
        * \brief Returned by the #maPurchaseGetField() syscall if the receipt does not
        * contain the given field.
        */
#define MA_PURCHASE_RES_INVALID_FIELD_NAME -10

/**
* \bried returned by the #maPurchaseSetPublicKey() syscall if the encoded public key
* is invalid.
*/
#define MA_PURCHASE_RES_MALFORMED_PUBLIC_KEY -11

/**
        * \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST ,
        * #MA_PURCHASE_EVENT_VERIFY_RECEIPT event types.
        * Sent by the #maPurchaseRequest() and #maPurchaseVerifyReceipt() syscalls
        * if the given product handle is invalid.
        */
#define MA_PURCHASE_ERROR_INVALID_HANDLE -1

/**
        * \brief Possible error code for any of the requests.
        * Indicates that the connection with the App Store / Google Play has failed.
        */
#define MA_PURCHASE_ERROR_CONNECTION_FAILED -2

/**
        * \brief Possible error code for #MA_PURCHASE_STATE_RECEIPT_ERROR.
        * Indicates that response from App Store/ Google Play for verifying
* a receipt cannot be parsed.
* Platform: iOS.
        */
#define MA_PURCHASE_ERROR_CANNOT_PARSE_RECEIPT -3

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the requested product is not valid
* on the App Store/ Google Play.
* Platform: iOS and Android.
*/
#define MA_PURCHASE_ERROR_INVALID_PRODUCT -4

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the client is not allowed to perform
* the attempted action.
* Platform: iOS.
*/
#define MA_PURCHASE_ERROR_INVALID_CLIENT -5

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the user cancelled the payment request.
* On Android, when the user pressed the back button on the checkout page instead of
* buying the item.
* Platform: iOS and Android.
*/
#define MA_PURCHASE_ERROR_CANCELLED -6

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the user is not allowed to authorize payments.
* Platform: iOS.
*/
#define MA_PURCHASE_ERROR_NOT_ALLOWED -7

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the user did not previously call #maPurchaseSetPublicKey().
* Platform: Android.
*/
#define MA_PURCHASE_ERROR_PUBLIC_KEY_NOT_SET -8

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if an unknown or unexpected server error occurred.
* Platform: iOS and Android.
*/
#define MA_PURCHASE_ERROR_UNKNOWN -9

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the quantity is not greater than zero.
* Platform: Android and iOS.
*/
#define MA_PURCHASE_ERROR_INVALID_QUANTITY -10

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_VERIFY_RECEIPT.
* Sent by the #maPurchaseVerifyReceipt() syscall if the product has not been purchased.
* Platform: iOS and Android.
*/
#define MA_PURCHASE_ERROR_NO_RECEIPT -11

/**
        * \brief Sent by the #maPurchaseCreate() syscall.
        * Check the event state member object to see if the product is valid or if an error occured.
* Platform: Android and iOS.
        */
#define MA_PURCHASE_EVENT_PRODUCT_CREATE 0

/**
        * \brief Sent by the #maPurchaseRequest syscall after an operation step has been completed
        * or if the operation has failed. Check event's purchaseData struct variable
        * for more information.
* Platform: Android and iOS.
        */
#define MA_PURCHASE_EVENT_REQUEST 1

/**
        * \brief Sent by the #maPurchaseVerifyReceipt() syscall.
        * Check the event state member object to see if the receipt is valid or not.
        * Platform: Android and iOS.
*/
#define MA_PURCHASE_EVENT_VERIFY_RECEIPT 2

/**
* \brief Received when the Billing service triggers a refund for your purchase.
* A new product has been created, and the event's productHandle member contains
* a handle to the purchased product.
        * \brief Platform: Android.
        */
#define MA_PURCHASE_EVENT_REFUNDED 3

/**
        * \brief Sent by the #maPurchaseRestoreTransactions() syscall.
        * A new product has been restored, or the request has failed. The event's
* productHandle member contains a handle to the purchased product.
        * Platform: iOS and Android.
        */
#define MA_PURCHASE_EVENT_RESTORE 4

/**
* \brief Sent by the #maPurchaseCreate() syscall.
* Assocciated with #MA_PURCHASE_EVENT_PRODUCT_CREATE.
* Indicates that product was validated by the App Store.
* On Android no product validation is done at this moment.
* Platform: iOS and Android.
*/
#define MA_PURCHASE_STATE_PRODUCT_VALID 0

/**
* \brief Sent by the #maPurchaseCreate() syscall.
* Assocciated with #MA_PURCHASE_EVENT_PRODUCT_CREATE.
* Indicates that the product is not valid in the App Store.
* Platform: iOS.
*/
#define MA_PURCHASE_STATE_PRODUCT_INVALID 1

/**
* \brief Sent by the #maPurchaseCreate(), #maPurchaseRequest() and
* #maPurchaseVerifyReceipt() syscalls.
* Assocciated with #MA_PURCHASE_EVENT_PRODUCT_CREATE,
* #MA_PURCHASE_EVENT_REQUEST and #MA_PURCHASE_EVENT_VERIFY_RECEIPT.
* Indicates that purchase is not supported/disabled on the device.
* Platform: Android and iOS.
*/
#define MA_PURCHASE_STATE_DISABLED 2

/**
* \brief Sent by the #maPurchaseCreate() syscall.
* Assocciated with #MA_PURCHASE_EVENT_PRODUCT_CREATE.
* Indicates that the given productHandle already exists.
* Use #maCreatePlaceholder() to generate a new one.
* Platform: Android and iOS.
*/
#define MA_PURCHASE_STATE_DUPLICATE_HANDLE 3

/**
        * \brief Sent by the #maPurchaseRequest syscall if the operation failed.
        * Check the errorCode variable from event's purchaseData struct for more info.
        */
#define MA_PURCHASE_STATE_FAILED 0

/**
        * \brief Sent by the #maPurchaseRequest syscall when the transaction has been received by the
        * Apple App Store/Google Play.
        */
#define MA_PURCHASE_STATE_IN_PROGRESS 1

/**
        * \brief Sent by the #maPurchaseRequest syscall when the transaction has been successfully
        * processed. Your application should provide the content the user purchased.
        */
#define MA_PURCHASE_STATE_COMPLETED 2

/**
* \brief Sent by the #maPurchaseVerifyReceipt() syscall.
* Assocciated with #MA_PURCHASE_EVENT_VERIFY_RECEIPT.
* Indicates that the receipt has been validated by the App Store / Google Play.
* Platform: Android and iOS.
*/
#define MA_PURCHASE_STATE_RECEIPT_VALID 4

/**
* \brief Sent by the #maPurchaseVerifyReceipt() syscall.
* Assocciated with #MA_PURCHASE_EVENT_VERIFY_RECEIPT.
* Indicates that the receipt has been invalidated by the App Store / Google Play.
* Platform: Android and iOS.
*/
#define MA_PURCHASE_STATE_RECEIPT_INVALID 5

/**
* \brief Sent by the #maPurchaseVerifyReceipt() syscall.
* Assocciated with #MA_PURCHASE_EVENT_VERIFY_RECEIPT.
* Indicates that an error has occurred while verifying the receipt.
        * Check the event's errorCode member object for more information.
* Platform: Android and iOS.
*/
#define MA_PURCHASE_STATE_RECEIPT_ERROR 6

/**
* \brief Sent by the #maPurchaseRestoreTransactions() syscall.
* Associated with #MA_PURCHASE_EVENT_RESTORE.
* Indicates that an error has occured while restoring transactions.
* The error can be one of the following: #MA_PURCHASE_ERROR_CONNECTION_FAILED,
* #MA_PURCHASE_ERROR_PUBLIC_KEY_NOT_SET.
        * Check the event's errorCode member object for more information.
* Platform: Android and iOS.
*/
#define MA_PURCHASE_STATE_RESTORE_ERROR -7

/**
* \brief Sent by the #maPurchaseRestoreTransactions() syscall.
* Associated with #MA_PURCHASE_EVENT_RESTORE.
* Indicates that a product has been restored.
* Platform: Android and iOS.
*/
#define MA_PURCHASE_STATE_PRODUCT_RESTORED -8

/**
* \brief Received after a refund was initiated on the server.
* Associated with #MA_PURCHASE_EVENT_REFUNDED.
* Indicates that a product has been refunded.
* Platform: Android.
*/
#define MA_PURCHASE_STATE_PRODUCT_REFUNDED -9

/**
        * \brief The number of items purchased.
        * Platform: iOS. On Android just one item can be bought at one time.
        */
#define MA_PURCHASE_RECEIPT_QUANTITY "quantity"

/**
        * \brief The product identifier of the item that was purchased.
        * Example: "com.yourapplication.productname".
        * Platform: iOS and Android.
        */
#define MA_PURCHASE_RECEIPT_PRODUCT_ID "product_id"

/**
        * \brief The transaction identifier of the item that was purchased.
        * Platform: iOS and Android.
        */
#define MA_PURCHASE_RECEIPT_TRANSACTION_ID "transaction_id"

/**
        * \brief The date and time this transaction occurred.
        * The date represents the number of seconds that elapsed since 1970-01-01T00:00:00.
        * Platform: iOS and Android.
        */
#define MA_PURCHASE_RECEIPT_PURCHASE_DATE "purchase_date"

/**
        * \brief For a transaction that restores a previous transaction, this holds the original
        * purchase date(in seconds).
        * Platform: iOS.
        */
#define MA_PURCHASE_RECEIPT_ORIGINAL_TRANSACTION_ID "original_transaction_id"

/**
        * \brief A string that the App Store uses to uniquely identify the application that
        * created the payment transaction. If your server supports multiple
        * applications, you can use this value to differentiate between them.
        * Applications that are executing in the sandbox do not yet have an
        * app-item-id assigned to them,so this key is missing from receipts created
        * by the sandbox.
        * Platform: iOS and Android.
        */
#define MA_PURCHASE_RECEIPT_APP_ITEM_ID "app_item_id"

/**
        * \brief An arbitrary number that uniquely identifies a revision of your application.
        * This key is missing in receipts created by the sandbox.
        * Platform: iOS.
        */
#define MA_PURCHASE_RECEIPT_VERSION_EXTERNAL_IDENTIFIER "version_external_identifier"

/**
        * \brief The bundle identifier for the application.
        * Example: "com.yourcompany.yourapplication".
        * Platform: iOS.
        */
#define MA_PURCHASE_RECEIPT_BID "bid"

/**
        * \brief A version number for the application.
        * Platform: iOS.
        */
#define MA_PURCHASE_RECEIPT_BVRS "bvrs"

/**
* \brief The cost of the product in the local currency.
* Platform: iOS.
*/
#define MA_PURCHASE_RECEIPT_PRICE "price"

/**
* \brief The localized product title.
* Platform: iOS.
*/
#define MA_PURCHASE_RECEIPT_TITLE "title"

/**
* \brief The localized product description.
* Platform: iOS.
*/
#define MA_PURCHASE_RECEIPT_DESCRIPTION "description"

#define IOCTL_UNAVAILABLE -1

//End of defines.
/**
* Compares the runtime's interface version with yours,
* using a hash of the interface's contents.
*
* If the versions do not match, a MoSync Panic is generated.
*
* This function returns the runtime's hash. However, if there is
* a version mismatch, syscall and IOCTL numbers may differ between the runtime and
* your version of the header files, causing a different function than this to be called.
*
* The hash appears as a 32-bit random number, so it is very unlikely that the return
* value from any other function is the same as the runtime's hash.
*
* Therefore, you should always compare the return value from this function to your hash
* and exit your program, preferably using maPanic(), if they don't match.
*
* \param hash Your hash. Pass #MAIDL_HASH.
* \returns The runtime's hash.
*/
int maCheckInterfaceVersion(int hash);

/**
* Shuts down the system. This function does not return.
* \param result Passed to the operating system, where applicable. Ignored otherwise.
*/
void maExit(int result);

/**
* Displays a message to the user, then shuts down the system.
* This function does not return.
* \param result Passed to the operating system, where applicable. Ignored otherwise.
* \param message The message should be short, not more than 40 characters,
* to ensure its visibility on all screen sizes.
* \see MAPanicReport
*/
void maPanic(int result, const char* message);

/**
* Sets \a size bytes, starting at \a dst, to the specified value, interpreted as an unsigned char.
* \returns \a dst.
*/
void* memset(void* dst, int val, ulong size);

/**
* Copies the values of \a size bytes from the location pointed by \a src directly to the memory
* block pointed by \a dst.
*
* The underlying type of the objects pointed by both the source and destination pointers are
* irrelevant for this function; The result is a binary copy of the data.
*
* The function does not check for any terminating null character in source - it always copies
* exactly \a size bytes.
*
* To avoid overflows, the size of the arrays pointed by both the destination and source
* parameters, shall be at least \a size bytes, and should not overlap (for overlapping memory
* blocks, memmove() is a safe approach).
* \returns \a dst.
*/
void* memcpy(void* dst, const void* src, ulong size);

/**
* Compares the C string \a str1 to the C string \a str2.
*
* This function starts comparing the first character of each string.
* If they are equal to each other, it continues with the following pairs until the
* characters differ or until a terminanting null-character is reached.
*
* \returns An integral value indicating the relationship between the strings:
* A zero value indicates that both strings are equal.
* A value greater than zero indicates that the first character that does not match
* has a greater value in \a str1 than in \a str2. A value less than zero indicates the opposite.
*/
int strcmp(const char* str1, const char* str2);

/**
* Copies the C string pointed by \a src into the array pointed by \a dst,
* including the terminating null character.
*
* To avoid overflows, the size of the array pointed by \a dst shall be long
* enough to contain the same C string as \a src (including the terminating null
* character), and should not overlap in memory with \a src.
* \returns \a dst.
*/
char* strcpy(char* dst, const char* src);

/**
* Returns \a a + \a b.
*/
double __adddf3(double a, double b);

/**
* Returns \a a - \a b.
*/
double __subdf3(double a, double b);

/**
* Returns \a a * \a b.
*/
double __muldf3(double a, double b);

/**
* Returns \a a / \a b.
* If \a b == 0, a <a href="../panics.html">MoSync Panic</a> is thrown.
*/
double __divdf3(double a, double b);

/**
* Returns -\a a.
*/
double __negdf2(double a);

/**
* Returns the integer part of \a a.
*/
int __fixdfsi(double a);

/**
* Returns the unsigned integer part of \a a. Negative values become zero.
*/
uint __fixunsdfsi(double a);

/**
* Returns the double representation of \a a.
*/
double __floatsidf(int a);

/**
* Returns the double representation of \a a.
*/
double __extendsfdf2(float a);

/**
* Returns \>0 if \a a \> \a b, 0 if \a a == \a b and \<0 if \a a \< \a b.
* If either argument is Not a Number, the result is undefined.
*/
int dcmp(double a, double b);

/**
* Returns \a a + \a b.
*/
float __addsf3(float a, float b);

/**
* Returns \a a - \a b.
*/
float __subsf3(float a, float b);

/**
* Returns \a a * \a b.
*/
float __mulsf3(float a, float b);

/**
* Returns \a a / \a b.
* If \a b == 0, a <a href="../panics.html">MoSync Panic</a> is thrown.
*/
float __divsf3(float a, float b);

/**
* Returns -\a a.
*/
float __negsf2(float a);

/**
* Returns the integer part of \a a.
*/
int __fixsfsi(float a);

/**
* Returns the unsigned integer part of \a a. Negative values become zero.
*/
uint __fixunssfsi(float a);

/**
* Returns the float representation of \a a.
*/
float __floatsisf(int a);

/**
* Returns the float representation of \a a.
*/
float __truncdfsf2(double a);

/**
* Returns \>0 if \a a \> \a b, 0 if \a a == \a b and \<0 if \a a \< \a b.
* If either argument is Not a Number, the result is undefined.
*/
int fcmp(float a, float b);

/**
* Returns the sine of \a x.
* \param x An angle in radians.
*/
double sin(double x);

/**
* Returns the cosine of \a x.
* \param x An angle in radians.
*/
double cos(double x);

/**
* Returns the tangent of \a x.
* \param x An angle in radians.
*/
double tan(double x);

/**
* Returns the square root of \a x.
*/
double sqrt(double x);

/**
* Sets the color used by drawing functions. Returns previous color. Initial color is 0 (black).
* \param rgb A color in RGB8 format (0xRRGGBB). The top byte is ignored.
*/
int maSetColor(int rgb);

/**
* Sets the clipping rectangle for the current draw target.
* The screen and every drawable image each maintains a clipping rectangle.
* Drawing operations have no effect outside the clipping rectangle.
* The default clipping rectangle covers the entire draw target, so that
* clipping occurs at the draw target's edges.
*/
void maSetClipRect(int left, int top, int width, int height);

/**
* Returns the clipping rectangle for the current draw target.
*/
void maGetClipRect(MARect* out);

/**
* Draws a single pixel using the current color.
* \see maSetColor()
*/
void maPlot(int posX, int posY);

/**
* Draws a line using the current color.
* \see maSetColor()
*/
void maLine(int startX, int startY, int endX, int endY);

/**
* Draws a filled rectangle using the current color.
* Width and height must be greater than zero.
* \see maSetColor()
*/
void maFillRect(int left, int top, int width, int height);

/**
* Draws a filled triangle strip using the current color.
* \param points A pointer to an array of \a count MAPoint2d:s representing the
* vertices of the strip.
* \param count The count of vertices in the strip. Must be at least 3.
* \see maSetColor()
*/
void maFillTriangleStrip(const MAPoint2d* points, int count);

/**
* Draws a filled triangle fan using the current color.
* \param points A pointer to an array of \a count MAPoint2d:s representing the
* vertices of the fan.
* \param count The count of vertices in the fan. Must be at least 3.
* \see maSetColor()
*/
void maFillTriangleFan(const MAPoint2d* points, int count);

/**
* Returns the size in pixels of Latin-1 text as it would appear on-screen.
*/
MAExtent maGetTextSize(const char* str);

/**
* Returns the size in pixels of Unicode text as it would appear on-screen.
*/
MAExtent maGetTextSizeW(const wchar* str);

/**
* Draws Latin-1 text using the current color.
* The coordinates are the top-left corner of the text's bounding box.
* \see maSetColor()
*/
void maDrawText(int left, int top, const char* str);

/**
* Draws Unicode text using the current color.
* The coordinates are the top-left corner of the text's bounding box.
* \see maSetColor()
*/
void maDrawTextW(int left, int top, const wchar* str);

/**
* Copies the back buffer to the physical screen.
*/
void maUpdateScreen(void);

/**
* Normally, a phone's backlight turns itself off after
* a few seconds of the user not pressing any keys.
* To avoid this behaviour, call this function periodically.
* As the timeout period is different for every device, and sometimes even user-configurable,
* it's recommended that you call this function at least once every 500 milliseconds
* to ensure that the light stays on at all times.
*/
void maResetBacklight(void);

/**
* Returns the screen size.
* Returns the screen size.
*/
MAExtent maGetScrSize(void);

/**
* Draws an image.
* It it placed on the draw target with the top left corner according to the parameters.
*/
void maDrawImage(MAHandle image, int left, int top);

/**
* Draws an image.
* The source is an array of ints that represent pixels in ARGB format.
* \param dstPoint The top-left point on the draw target.
* \param src The address to the source image.
* \param srcRect The portion of the source image to be drawn.
* \param scanlength The width, in pixels, of the image represented by the source array.
*/
void maDrawRGB(const MAPoint2d* dstPoint, const void* src, const MARect* srcRect, int scanlength);

/**
* Draws a portion of an image using a transformation.
* \param image The source image.
* \param srcRect The portion of the source image to be drawn.
* Must not exceed the bounds of the source image.
* \param dstPoint The top-left point on the draw target.
* \param transformMode One of the \link #TRANS_NONE TRANS \endlink constants.
* \see maDrawImage
*/
void maDrawImageRegion(MAHandle image, const MARect* srcRect, const MAPoint2d* dstPoint, int transformMode);

/**
* Returns the size of an image.
*/
MAExtent maGetImageSize(MAHandle image);

/**
* Copies an image into an array of ints that represent pixels in ARGB format.
* The destination rectangle is defined as { 0,0, \a srcRect.width, \a srcRect.height }.
* Parts of the destination array that are outside the destination rectangle are not modified.
* If \a srcRect is outside the bounds of the source image,
* or if \a srcRect.width is greater than \a scanlength, a MoSync Panic is thrown.
* \param image The handle to the source image.
* \param dst The address of the destination array.
* \param scanlength The width of the image, in pixels, represented by the destination array.
* \param srcRect The portion of the source image to be copied.
*/
void maGetImageData(MAHandle image, void* dst, const MARect* srcRect, int scanlength);

/**
* Sets the current draw target.
* The handle must be a drawable image or #HANDLE_SCREEN, which represents the back buffer.
* The initial draw target is the back buffer.
* If an image is set as draw target, its object handle goes into flux, which prevents
* its destruction or use as a source in maDrawImage. When a different draw target is set,
* the image's handle is restored. Returns the the previously set draw target.
* \see maCreateDrawableImage()
*/
MAHandle maSetDrawTarget(MAHandle image);

/**
 * Finds the label resource with the specified \a name and returns its index.
 * If it is not found, -1 is returned.
 */
int maFindLabel(const char* name);

/**
* Creates an image object using encoded data from a data object.
* All platforms support the PNG format. Some platforms may also support JPEG and/or GIF.
* \param placeholder The placeholder for the image object that is to be created.
* \param data The data object that holds the encoded data.
* \param offset The offset in the data object where the encoded data begins.
* \param size The size in bytes of the encoded data.
* \returns #RES_OK if succeded and #RES_OUT_OF_MEMORY or #RES_BAD_INPUT if failed.
*/
int maCreateImageFromData(MAHandle placeholder, MAHandle data, int offset, int size);

/**
* Creates an image object using raw ARGB data.
* \param placeholder The placeholder for the image object that is to be created.
* \param src Address of the raw data. 4 bytes per pixel, format 0xAARRGGBB.
* \param size The size in pixels of the image, constructed using the EXTENT() macro.
* \param alpha Non-zero if the resulting image should have an alpha channel, zero otherwise.
* \returns #RES_OK if succeded and #RES_OUT_OF_MEMORY if failed.
*/
int maCreateImageRaw(MAHandle placeholder, const void* src, MAExtent size, int alpha);

/**
* Creates a drawable image of the specified size. A drawable image has no alpha channel,
* which is to say, no transparency.
* Its initial contents are undefined, so you should draw onto the entire surface to
* be sure what will happen when you draw this image onto something else.
* \param placeholder The resource handle of the new image.
* \param width Width, in pixels, of the new image. Must be \> 0.
* \param height Height, in pixels, of the new image. Must be \> 0.
* \see maSetDrawTarget()
* \returns #RES_OK if succeded and #RES_OUT_OF_MEMORY if failed.
*/
int maCreateDrawableImage(MAHandle placeholder, int width, int height);

/**
* Creates a data object of the specified \a size, in bytes. Its initial contents are undefined.
* \returns #RES_OK if succeded and #RES_OUT_OF_MEMORY if failed.
*/
int maCreateData(MAHandle placeholder, int size);

/**
*	Creates a new placeholder and returns the handle to it.
*/
MAHandle maCreatePlaceholder(void);

/**
* Releases a handle returned by maCreatePlaceholder().
* If the handle refers to an object, such as an image or a data object,
* that object is destroyed, as if maDestroyObject() had been called.
*
* The released handle may be reused by the system
* and returned by future calls to maCreatePlaceholder(),
* or by other system functions that allocate resources dynamically.
*
* This function is preferred to maDestroyObject(), unless you need
* to reuse the handle.
*
* Attempting to destroy a handle that has already been released,
* or was not returned by maCreatePlaceholder(), will cause a MoSync Panic.
*
* @param handle The handle to be released.
*/
void maDestroyPlaceholder(MAHandle handle);

/**
* Destroys an object of any type. The handle becomes a placeholder.
*/
void maDestroyObject(MAHandle handle);

/**
* Returns the size, in bytes, of a data object.
*/
int maGetDataSize(MAHandle data);

/**
* Reads \a size bytes from a data object, starting at \a offset,
* into memory pointed to by \a dst.
* \warning Do not attempt to read zero bytes or out of bounds;
* it is not supported and will result in a MoSync Panic.
*/
void maReadData(MAHandle data, void* dst, int offset, int size);

/**
* Writes \a size bytes to a data object, starting at \a offset,
* from memory pointed to by \a src.
*/
void maWriteData(MAHandle data, const void* src, int offset, int size);

/**
* Copies \a size bytes from data object \a src to \a dst, at the specified offsets.
*/
void maCopyData(const MACopyData* params);

/**
* Opens a permanent data store, optionally creates one if it doesn't exist already.
*
* Returns a Store MAHandle on success.
* Returns #STERR_NONEXISTENT if !(flags & #MAS_CREATE_IF_NECESSARY) and the store does not exist.
* Returns another \link #STERR_GENERIC STERR \endlink code if the store could not be opened
* for another reason.
*
* \param name The name of the store. A store name must have from 1 to 32 characters,
* and must not contain any of the following characters: "/\\:;?*'
* \param flags A combination of \link #MAS_CREATE_IF_NECESSARY MAS \endlink flags, or zero.
*/
MAHandle maOpenStore(const char* name, int flags);

/**
* Writes the contents of a data object to a store. Destroys any data previously in the store.
* Returns \> 0 on success, #STERR_FULL if the storage system is full,
* or another \link #STERR_GENERIC STERR \endlink code if the write failed for another reason.
* \param store The store to write to.
* \param data The data object to read from.
*/
int maWriteStore(MAHandle store, MAHandle data);

/**
* Creates a data object and copies the contents of a store to it.
* Use maGetDataSize to get the size of the data.
* \param store The store to read from.
* \param placeholder The placeholder handle where a data object will be created.
* \returns RES_OK if succeded and RES_OUT_OF_MEMORY if failed.
*/
int maReadStore(MAHandle store, MAHandle placeholder);

/**
* Closes a store. Also deletes that store if \a _delete is non-zero.
*/
void maCloseStore(MAHandle store, int _delete);

/**
* Asynchronously opens a connection using the specified URL.
* A URL takes the following form:
* <tt>\<protocol\>://\<address\>[:\<port\>]\<parameters\></tt>\n
* The following protocols are supported:
*
* <tt>socket</tt>, which is TCP. It has no parameters.
*
* <tt>ssl</tt>, which is an encrypted TCP connection. It has no parameters.
*
* <tt>http</tt>, which is HTTP/1.0 GET. When using HTTP, you need not specify the port;
* it defaults to port 80.
*
* Its parameters is the document path (for example, "/index.html").
* You must specify a path, or this function will fail with #CONNERR_URL.
* The minimal path ("/") is acceptable.
*
* Writing to a http connection is not allowed.
*
* <tt>https</tt>, which is an encrypted HTTP GET. It has the same parameters as <tt>http</tt>.
*
* <tt>btspp</tt>, which is Bluetooth Serial Port. It has no parameters.
*\n
*\n
* For the <tt>socket</tt> and <tt>http</tt> protocols, \a \<address\> can be either a decimal,
* dot-delimited (.) IPv4 address or a standard Domain Name,
* while \a \<port\> is a decimal number from 1 to 65535.
*
* In the <tt>socket</tt> protocol, certain ports are protected on certain platforms and
* cannot be used, most notably port 80 on Java ME. In this case, use http instead.
*
* On a few devices, using ports numbered below 1024 may cause system crashes.
* Therefore, it is advisable to use ports above 1024 if you can choose.
*
* On some J2ME devices, connections to port 443 (except from https) is not
* allowed and might cause a system exception.
*
* For the <tt>btspp</tt> protocol, \a \<address\> is 12 hexadecimal digits and
* \<port\> is a decimal number from 1 to 30.
*
* Example TCP url: <tt>socket://www.example.com:23</tt>
*
* Example SSL url: <tt>ssl://www.example.com:22</tt>
*
* Example HTTP url: <tt>http://www.example.com/directory/document.html</tt>
*
* Example HTTPS url: <tt>https://www.google.com</tt>
*
* Example Bluetooth url: <tt>btspp://001dbe15e455:9</tt>
*
* You can also use MAUtil::BluetoothConnection to connect via Bluetooth service uuid.
*
* To find useful Bluetooth addresses, use the Bluetooth discovery API.
* See maBtStartDeviceDiscovery().
*
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_CONNECT.
*
* The success value is \> 0. For the <tt>http</tt> protocol,
* the success value is the HTTP response code.
*
*
* When you're done with the connection, maConnClose() must be called to free
* the resources associated with the handle. This must be done even if
* the connect operation failed.
*
* There is a limit of #CONN_MAX open connection handles at any time, so if you keep
* opening connections without closing them, you'll eventually receive the
* #CONNERR_MAX error code instead of new connection handles.
*
* Alternatively, this function can be called with one of these url types to
* create a Server Connection:\n
* <tt>socket://[:\<port\>]</tt>, for TCP.\n
* <tt>btspp://localhost:\<uuid\>[;name=\<YourServiceName\>]</tt>, for Bluetooth.\n
* \<uuid\> is a 32-digit hexadecimal number. It will be used to create the
* service record. Its MAUUID representation can be used by clients to search for
* this service.
*
* Example Bluetooth server url:
* <tt>btspp://localhost:0000110100001000800000805F9B34FB;name=Serial Port</tt>
*
* Server connections are created synchronously; no CONN event is generated,
* and as soon as this function returns, it's done.
*
* A server connection can not be read from or written to, but it can be closed.
* You can also use it in calls to maAccept() and maConnGetAddr().
*
* \returns The connecting handle \>0, or one of the \link #CONNERR_GENERIC CONNERR \endlink values.
* \see maGetEvent()
* \see \ref connApiOverview
*/
MAHandle maConnect(const char* url);

/**
* Closes a connection, freeing any resources associated with the handle.
*
* Cancels any active operations on the connection.
* Such operations will finish with #CONNERR_CANCELED.
*/
void maConnClose(MAHandle conn);

/**
* Asynchronously reads at least one and at most \a size bytes from a connection to memory.
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_READ.
* The success value is the number of bytes read.
*
* \see maGetEvent
* \see \ref connApiOverview
*/
void maConnRead(MAHandle conn, void* dst, int size);

/**
* Asynchronously writes \a size bytes to a connection from memory.
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_WRITE.
* The success value is \> 0.
*
* \warning The source data must remain available until the operation is complete,
* so if it was dynamically allocated, don't free it too early.
* \see maGetEvent
* \see \ref connApiOverview
*/
void maConnWrite(MAHandle conn, const void* src, int size);

/**
* Asynchronously reads at least one and at most \a size bytes from a connection to
* a data object, starting at the specified offset.
* During the read, the data object being written to will be in flux.
* Any attempt to access it will result in a Panic.
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_READ.
* The success value is is the number of bytes read.
*
* \see maGetEvent
* \see \ref connApiOverview
*/
void maConnReadToData(MAHandle conn, MAHandle data, int offset, int size);

/**
* Asynchronously writes \a size bytes to a connection from a data object,
* starting at the specified offset.
* During the write, the data object being read from will be in flux.
* Any attempt to access it will result in a Panic.
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_WRITE.
* The success value is \> 0.
*
* \see maGetEvent
* \see \ref connApiOverview
*/
void maConnWriteFromData(MAHandle conn, MAHandle data, int offset, int size);

/**
* Retrieves the address of a connection. On server connections,
* you'll get the local address. On normal connections, you'll get the remote address.
*
* You can pass #HANDLE_LOCAL to retrieve the local address.
* In that case, you must set MAConnAddr::family before calling this function,
* to tell it which address to retrieve. Also, the port member is not set.
*
* \returns \< 0 on error.
*/
int maConnGetAddr(MAHandle conn, MAConnAddr* addr);

/**
* Creates an unfinished HTTP/1.0 connection. You cannot read from this connection
* until it's been Finished. Before then, you can set request headers. After,
* you can get response headers.

* POST connections are special; they let you write to the connection before
* it's Finished. The first write causes the underlying TCP connection to be
* established and request headers transmitted. After the first write has
* begun, you may no longer set request headers.

* \param url An HTTP or HTTPS URL. See maConnect() for the exact form.
* \param method #HTTP_GET, #HTTP_POST, #HTTP_HEAD, #HTTP_PUT or #HTTP_DELETE.
* \returns An unfinished HTTP connection handle \>0, or a
* \link #CONNERR_GENERIC CONNERR \endlink value.
* \see maHttpFinish
*/
MAHandle maHttpCreate(const char* url, int method);

/**
* Sets a request header of an HTTP connection.
*
* Overwrites any existing header with the same key. The keys is case-insensitive.
*
* If the connection's method is #HTTP_POST, it must not have been written to.
* \param conn An unfinished HTTP connection handle.
* \param key The name of the header.
* \param value The new value of the header.
*/
void maHttpSetRequestHeader(MAHandle conn, const char* key, const char* value);

/**
* Stores an HTTP response header in the specified buffer.
*
* The buffer may be too small to contain the header and the terminating zero;
* in that case, the buffer will not be filled
* and you should create a bigger buffer and call this function again.
* Use the return value to determine how long the buffer needs to be.
*
* \param conn A finished HTTP connection handle.
* \param key The name of the header. Case-insensitive.
* \param buffer A string buffer.
* \param bufSize The size of the buffer, in bytes.
* \returns The length of the header value, excluding the terminating zero, or
* #CONNERR_NOHEADER if the header doesn't exist.
*/
int maHttpGetResponseHeader(MAHandle conn, const char* key, char* buffer, int bufSize);

/**
* Asynchronously finishes an HTTP connection. This entails making the
* underlying TCP connection and sending request headers, unless that has
* already been done by a #HTTP_POST write, and receiving the response headers.
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_FINISH.
* The success value is the HTTP response code.
*
* \param conn An unfinished HTTP connection handle.
* \see maGetEvent
* \see \ref connApiOverview
*/
void maHttpFinish(MAHandle conn);

/**
* Loads a new object array from the a data object. The old object array is overwritten,
* except where the new array has SKIP objects. In those cases, the old objects are saved.
* Returns zero on error, \>0 on success. On error, the old object array remains unchanged.
* \param data The data object containing new resources, in the format of a MoSync
* compiled resource file.
* \note There must not be any UBIN objects in the new array,
* except those of the old array that were SKIP'd.
*/
int maLoadResources(MAHandle data);

/**
* Loads a specific resource in the given placeholder.
* \param handle The handle of the resource that needs to be loaded
* \param placeholder The placeholder where to load the resource from handle.
* \param flag One of the MA_RESOURCE_OPEN, MA_RESOURCE_CLOSE,
* MA_RESOURCE_OPEN|MA_RESOURCE_CLOSE to control the resource binary.
*/
int maLoadResource(MAHandle handle, MAHandle placeholder, int flag);

int maCountResources(void);

/**
* Loads a new program from the a data object, closes the running program, and starts the new one.
* The format of the data object is a MoSync program file concatenated with a resource file.
* If this function returns, there was an error.
*
* \param data The data object containing the new program.
* \param reload If non-zero, the original program will be reloaded after the new program has
* exited. If zero, MoSync will exit when the loaded program exists, unless that program,
* or one of its sub-programs, calls this function with \a reload set to non-zero.
*
* \note A program that was loaded with this function cannot be reloaded; instead, it will
* always be the very first program in the chain that is reloaded.
* \note The stored reload flag is or'd with the one provided to each call to this function.
* It is also reset when the reload occurs.
* \note Thus, if one program loads another with reload on, and the loaded program loads another
* with reload off, the original program will still be reloaded when the last one exits.
* Should the original program decide to exit after being reloaded, it will not be reloaded again.
*
* \note The \link #EVENT_TYPE_CLOSE close event \endlink will disable the reload mechanism.
*/
void maLoadProgram(MAHandle data, int reload);

/**
* Returns a bitmask consisting of \link #MAKB_LEFT MAKB \endlink flags describing the current
* key state.
*/
int maGetKeys(void);

/**
* There is a FIFO buffer that contains up to #EVENT_BUFFER_SIZE events.
* Each event has a type. Some types have additional data.
*
* This function retrieves the next event, unless the queue is empty.
* Use maWait() to wait until more events are available.
* \param event Pointer to an MAEvent struct that will be filled with the next event.
*
* When the \link #EVENT_TYPE_CLOSE Close event \endlink is posted,
* you must call maExit as soon as possible, or
* your program will be forcibly terminated. The timeout is device-dependent, but
* never longer than #EVENT_CLOSE_TIMEOUT milliseconds.
*
* After the Close event has been posted, most syscalls will stop working,
* returning default values and doing nothing.
* Only the following groups of functions are guaranteed to remain operational:
* Memory management, math, Resource management, Store, time, logging, maExit() and maPanic().
*
* \note Not all platforms have the capability to generate a Close event.
* You must always provide another way for the user to exit your application.
*
* \returns \> 0 on success, or zero if the buffer is empty.
*/
int maGetEvent(MAEvent* event);

/**
* Suspends execution until there is an event in the buffer,
* or \a timeout milliseconds have passed. A timeout <= 0 is considered infinite.
* Timer accuracy is platform-specific, but should be better than 20 ms.
*
* Use this function rather than idle loops to save CPU/battery power.
* \see maGetEvent()
*/
void maWait(int timeout);

/**
* Returns the number of seconds that have passed since
* 00:00:00, Jan 1st, 1970, UTC, according to the device clock.
*/
int maTime(void);

/**
* Returns the number of seconds that have passed since
* 00:00:00, Jan 1st, 1970, local time, according to the device clock.
*/
int maLocalTime(void);

/**
* Returns the number of milliseconds that has passed since some unknown point in time.
* Accuracy is platform-specific, but should be better than 20 ms.
*/
int maGetMilliSecondCount(void);

/**
* Returns an approximation to the amount of memory currently available for
* allocating new objects, measured in bytes.
*
* There may be more memory available than reported by this function. Conversely,
* in the time between calling this function and allocating an object, another program
* may have allocated an object of its own, decreasing the available memory.
*
* The amount of memory required to allocate any specific object is device-dependent.
*
* When using this function to determine whether or not to allocate an object, always
* leave some memory alone for use by the system,
* preferably about 10% of the device's total memory, as reported by maTotalObjectMemory().
*/
int maFreeObjectMemory(void);

/**
* Returns the total amount of memory available to MoSync, measured in bytes.
* May change over time, even as the program is running.
*/
int maTotalObjectMemory(void);

/**
* Switches on the vibrator for the requested number of milliseconds,
* or switches it off if the requested duration is zero.
* A call to this function will override the previous call.
* Returns non-zero if the operation was allowed, zero if it wasn't.\n
* \n
* On devices which has no vibrator, this function will always return zero.
* The user may turn vibration off in phone settings. In that case, calling this function
* with a duration of zero may return non-zero, but a non-zero duration will return zero.
* In any case, the only way to conclusively determine if vibration is currently supported
* or not is to call this function with a duration of at least 1(one) ms.
* On iPhone the argument won't be taken into account.
*/
int maVibrate(int ms);

/**
* Starts playing a sound.
*
* If a sound was already playing, it is stopped.
*
* The sound data is formatted as follows: \<mime type\>\<null terminator byte\>\<encoded data\>.
*
* The .media directive in the MoSync resource compiler creates this formatting.
*
* If you download or generate sound clips dynamically, you'll have to take care
* of the formatting yourself, or use a library that does it for you,
* for example MAUtil::AudioDownloader.
*
* To play .media resources, use offset 0 and maGetDataSize().
*
* Do not touch the resource while it's playing, or there will be... trouble.
*
* \returns \>= 0 on success and \< 0 on failure.
*
* \param sound_res The data object in which the sound is stored.
* \param offset The offset in the data object where the mime type and sound data is stored.
* \param size The size of mime type string and sound data.
*/
int maSoundPlay(MAHandle sound_res, int offset, int size);

/**
* Stops the sound and rewinds it.
*/
void maSoundStop(void);

/**
* Returns \> 0 if sound is playing, zero if it's not.
*/
int maSoundIsPlaying(void);

/**
* Returns the volume, in the range 0-100, used by the sound engine.
* The initial volume is 100.
*/
int maSoundGetVolume(void);

/**
* Sets the volume, which is a value in the range 0-100. All other values will be clamped
* to the allowed range.
*/
void maSoundSetVolume(int vol);

/**
* Invokes an extension function. Normally you don't call this function directly.
*/
longlong maExtensionFunctionInvoke(int function, int a, int b, int c);

// End of header functions.
/**
* Loads an extension module. Normally you don't call this function directly.
*/
MAExtensionModule maExtensionModuleLoad(const char* id, int hash);

/**
* Loads an extension function. Normally you don't call this function directly.
*/
MAExtensionFunction maExtensionFunctionLoad(MAExtensionModule module, int index);

/**
* Returns a handle to one of the default fonts of the device, in the style and size you specify.
* \param 'type' The type of the font, can be FONT_TYPE_[SANS_SERIF,SERIF,MONOSPACE].
* \param 'style' The style of the font, can be FONT_STYLE_[NORMAL,BOLD,ITALIC].
* \param 'size' The size of the font.
* \return The handle to the font, RES_FONT_NO_TYPE_STYLE_COMBINATION, or RES_FONT_INVALID_SIZE.
*/
MAHandle maFontLoadDefault(int type, int style, int size);

/**
* Sets the font to be used with maDrawText and maDrawTextW, and returns the handle
* to the previous font.
* \param 'font' an MAHandle for a font object.
* \return The handle to the previous font, or RES_FONT_INVALID_HANDLE.
*/
MAHandle maFontSetCurrent(MAHandle font);

/**
* Returns the number of fonts that are available in the system.
* \return Number of fonts.
* \see maFontGetName.
*/
int maFontGetCount(void);

/**
* Copies the font postscript name of the given index to the buffer.
* You must have first called maFontGetCount() at least once before calling this function.
* \param 'index' A 0-based index to the font.
* \param 'buffer' An empty char buffer that will receive the font name.
* \param 'bufferLen' The size of the buffer.
* \return The number of bytes copied (with terminating NULL) or RES_FONT_INDEX_OUT_OF_BOUNDS
* or RES_FONT_INSUFFICIENT_BUFFER or RES_FONT_LIST_NOT_INITIALIZED.
* \see maFontGetCount, maFontLoadWithName.
*/
int maFontGetName(int index, char* buffer, int bufferLen);

/**
* Returns a handle to a font with the specific postscript name and size.
* \param 'postScriptName' The postscript name of the font.
* \param 'size' The size of the font.
* \return Handle to the font, RES_FONT_NAME_NONEXISTENT, or RES_FONT_INVALID_SIZE.
*/
MAHandle maFontLoadWithName(const char* postScriptName, int size);

/**
* Deletes a loaded font
* \param 'font' A font handle
* \return RES_FONT_OK, RES_FONT_INVALID_HANDLE, or RES_FONT_DELETE_DENIED.
*/
int maFontDelete(MAHandle font);

/**
 * Sends the current call stack to the report pipe. Returns 0 if succeeded.
 */
int maReportCallStack(void);

/**
* Dumps a string, an int, and the current call stack to the log file. Returns 0 if succeeded.
*/
int maDumpCallStackEx(const char* str, int data);

/**
* Protects a piece of the data memory.
* Any attempt to write to that piece of memory will raise a panic.
* \param 'start' The start address of the memory piece to protect.
* \param 'length' The length of the memory piece to protect.
*/
void maProtectMemory(const void* /* void* */ start, int length);

/**
* Unprotects a piece of the data memory.
* \param 'start' The start address of the memory piece to unprotect.
* \param 'length' The length of the memory piece to unprotect.
*/
void maUnprotectMemory(const void* /* void* */ start, int length);

/**
* Toggles memory protection.
* \param 'enable' If 1 turns on memory protection, if 0 turns of memory protection.
*/
void maSetMemoryProtection(int enable);

/**
* Returns if memory protection is enabled or not.
* \returns '1' if memory protection is turned on, '0' if it is turned off.
*/
int maGetMemoryProtection(void);

/**
* Returns the percentage of battery power remaining. This is an integer between 0 and 100.
* Currently only available on some Symbian and Windows Mobile phones.
*/
int maGetBatteryCharge(void);

/**
* Calls on the operating system to lock the phone's keypad.
* Returns \> 0 if successful.
*/
int maLockKeypad(void);

/**
* Calls on the operating system to unlock the phone's keypad.
* Returns \> 0 if successful.
*/
int maUnlockKeypad(void);

/**
* Returns \> 0 if the phone's keypad is locked by the operating system, zero otherwise.
*/
int maKeypadIsLocked(void);

/**
* Writes data to the MoSync system log file.
* Useful only for debugging purposes.
*/
int maWriteLog(const void* /* void* */ src, int size);

/**
* Starts a device discovery operation.
*
* \param names Set this to non-zero to retrieve the names of remote devices.
* This takes extra time, so set it to zero for faster scanning.
*
* \note On Windows, due to a bug in the Microsoft Bluetooth stack,
* newly discovered devices may appear without names.
* Re-scanning should make the devices' names appear properly.
* A workaround is planned for a future release of MoSync.
*
* \returns 0 on success, \< 0 on failure.
*
* \see maBtGetNewDevice
* \see maBtCancelDiscovery
* \see EVENT_TYPE_BT
*/
int maBtStartDeviceDiscovery(int names);

/**
* Fills an MABtDevice structure with information about a device.
* Removes the data from an internal queue filled by maBtStartDeviceDiscovery().
*
* If the \a names parameter of maBtStartDeviceDiscovery() was zero,
* all members of \a d except \a address are ignored and unchanged.
*
* The space needed to store the device name and its terminating zero
* may be greater than a nameBufSize. In that case, the copy is truncated.
* The maximum length of a device name according to the Bluetooth 2.0 specification
* is 248 bytes, excluding the terminating zero. However, it's recommended that you
* don't provide buffers larger than what your application has a use for.
*
* Note that you need to fill the MABtDevice structure before passing it
* as a parameter, otherwise you will get memory access problems.
*
* \returns 1 if successful, zero if the queue is empty.
*/
int maBtGetNewDevice(void* /* MABtDevice* */ d);

/**
* Starts a service discovery operation.
* Takes a device address and the UUID of the service class to search for.
* For example, pass #RFCOMM_PROTOCOL_MAUUID and you'll get all connectable services.
* Pass #SerialPort_Service_MAUUID and you'll get only that type of service.
*
* \see maBtGetNextServiceSize
* \see maBtGetNewService
* \see maBtCancelDiscovery
* \see EVENT_TYPE_BT
*
* \returns 0 on success, \< 0 on failure.
*
* \note Service discovery is not supported on Android. Use MAUtil::BluetoothConnection
* to connect via service UUID. That method is cross-platform.
*/
int maBtStartServiceDiscovery(const void* /* MABtAddr* */ address, const void* /* MAUUID* */ uuid);

/**
* Fills an MABtServiceSize structure with meta-data about the next service.
* Does not remove the service from the queue.
* \returns \> 0 on success, or zero if the queue is empty.
* \see maBtStartServiceDiscovery
* \see maBtGetNewService
*/
int maBtGetNextServiceSize(void* /* MABtServiceSize* */ dst);

/**
* Fills an MABtService structure with information about the next service.
* Removes the data from the internal queue filled by maBtStartServiceDiscovery().
* \returns \> 0 on success, or zero if the queue is empty.
* \see maBtGetNextServiceSize
*/
int maBtGetNewService(void* /* MABtService* */ dst);

/**
* Cancels any active discovery operation.
* If an operation was canceled, its last BT event will have the state #CONNERR_CANCELED.
* This is an asynchronous operation. If this function returns 1,
* it is not safe to start another discovery before
* you've received the #CONNERR_CANCELED event.
* \see maBtStartDeviceDiscovery
* \see maBtStartServiceDiscovery
* \see EVENT_TYPE_BT
* \returns 0 if there was no active operation, 1 if there was.
*/
int maBtCancelDiscovery(void);

/**
* Starts collecting location information.
* Does nothing if collection is already active.
* May cause a system popup asking for the user's permission.
*
* \link #EVENT_TYPE_LOCATION LOCATION events \endlink will be generated as the
* estimated location is updated.
*
* \link #EVENT_TYPE_LOCATION_PROVIDER LOCATION_PROVIDER events \endlink will be generated
* when the location provider state changes.
*
* \returns MA_LPS_AVAILABLE on success, 0 if collection was already active, or
* MA_LPS_OUT_OF_SERVICE if the location provider is out of service, or
* \< 0 on error.
*
* \note <b>The location API is experimental, not fully tested.
* It may not work as advertised.</b>
*
* In particular, it is unsupported on the MoSync Emulator.
* Implementation details are likely to change in the future.
*/
int maLocationStart(void);

/**
* Stops collecting location information, and stops generating events.
* Does nothing if collection is not active.
*
* \note \link #EVENT_TYPE_LOCATION Location events \endlink that are generated before
* this function returns may remain in the event queue afterwards.
*
* \returns 0.
*/
int maLocationStop(void);

/**
* Requests that the operating system handle (for example, display or install) the indicated URL.
*
* If the platform has the appropriate capabilities and resources available,
* it SHOULD bring the appropriate application to the foreground and let the user
* interact with the content, while keeping the MoSync application running in the background.
* If the platform does not have appropriate capabilities or resources available,
* it MAY wait to handle the request until after the MoSync application exits.
* In this case, when the requesting MoSync application exits, the platform MUST then bring
* the appropriate application (if one exists) to the foreground to let the user
* interact with the content.
*
* The URL can be of the form <tt>http://\<address\></tt>, in which case the usual response is
* to launch the built-in web browser.
*
* The URL can also be of the form <tt>tel:\<number\></tt>, in which case the request is
* interpreted as a request to initiate a voice call to the specified number.
*
* If the URL refers to a packaged application
* (a .JAR file on Java platforms, .SIS on Symbian or .CAB on Windows Mobile),
* the request is interpreted as a request to install that application.
*
* The application being requested can be an update of the calling application.
* In that case, the calling application must always exit before the request can be processed.
*
* \param url The URL for the platform to load.
* An empty string or NULL cancels any pending requests.
*
* \returns \> 0 if maExit() must be called before the request can be processed.
* 0 if the request is being processed.
* \< 0 if the request could not be processed.
* Specifically, the error code #IOCTL_UNAVAILABLE means that the protocol
* of the request is not supported on the platform.
*/
int maPlatformRequest(const char* url);

/**
* Opens a file handle.
* If the file exists, the file will be accessible according to the mode specified.
* If the file does not exist, a handle will still be returned and
* maFileExists() will return false.
* The file may then be created by calling maFileCreate().
*
* Directories may be opened with this function. They cannot be read or written,
* but they can be created and deleted, and their existence can be queried.
* Directory paths must end with a slash('/').
*
* Attempting to open an existing directory without ending its path with a slash will fail.
* Likewise, attempting to open an existing file while ending its path with a slash will also fail.
* Either case will return #MA_FERR_WRONG_TYPE.
*
* \note To avoid memory leaks, all opened handles should be closed using maFileClose().
*
* \note To find valid file paths, use maFileListStart().
*
* \param path The absolute path to the file.
* \param mode The access mode. Either #MA_ACCESS_READ or #MA_ACCESS_READ_WRITE.
* Directories also use these access modes. #MA_ACCESS_READ lets you see if the directory exists.
* #MA_ACCESS_READ_WRITE also lets you create or delete it.
* \returns The new file handle, or \< 0 on error.
*
* \note If any maFile function other than maFileOpen() fails,
* the state of the file handle becomes boundedly undefined.
* This means that any operation on it, other than maFileClose(), may fail.
*/
MAHandle maFileOpen(const char* path, int mode);

/**
* Returns 1 if the file exists, 0 if it doesn't, or \< 0 on error.
*/
int maFileExists(MAHandle file);

/**
* Closes a file handle. Returns 0. Panics on error.
*/
int maFileClose(MAHandle file);

/**
* Creates a file or directory, given an file handle opened with #MA_ACCESS_READ_WRITE.
* The file must not exist prior to calling this function.
* After creation, the file will be accessible for writing and reading.
* Returns 0 on success, or \< 0 on error.
*/
int maFileCreate(MAHandle file);

/**
* Deletes a file or directory.
* The file must exist prior to calling this function.
* If it's a directory, it must be empty.
* Returns 0 on success, or \< 0 on error.
*/
int maFileDelete(MAHandle file);

/**
* Returns the size of the file, or \< 0 on error.
* \note MoSync cannot handle files larger than 2 GiB (2^31 - 1 bytes).
* \param file A file handle. The file must exist and must not be a directory.
*/
int maFileSize(MAHandle file);

/**
* Returns the number of free bytes on the file system on which \a file resides.
* Note that due to file system overhead, it is not possible to use all of
* this space for file data.
* Returns \< 0 on error.
*/
int maFileAvailableSpace(MAHandle file);

/**
* Returns the total size, in bytes, of the file system on which \a file resides.
* Returns \< 0 on error.
*/
int maFileTotalSpace(MAHandle file);

/**
* Returns the date/time when the file was last modified, or \< 0 on error.
* The time format is Unix UTC.
* \see maTime()
*/
int maFileDate(MAHandle file);

/**
* Renames a file.
*
* If \a newName does not contain a slash,
* the file stays in its original directory.
*
* If \a newName does contain a slash, it must be a complete pathname,
* and the file is moved to that path. The new path must be on the same file system
* as the original path. If it is not, this function fails with #MA_FERR_RENAME_FILESYSTEM.
* Moving a file to another directory is not supported on Java ME. If it is attempted,
* this function fails with #MA_FERR_RENAME_DIRECTORY.
*
* \returns 0 on success, or \< 0 on error.
*/
int maFileRename(MAHandle file, const char* newName);

/**
* Truncates the file.
*
* If \a offset is less than the file's current size,
* the file's new size is equal to the offset. All data after the offset is discarded.
*
* If \a offset is equal to the file's current size, this function does nothing.
*
* If \a offset is greater than the file's current size,
* this function MAY increase the size of the file.
* You can determine if it did so by calling maFileSeek() with #MA_SEEK_END.
*
* If the file's current position is greater than \a offset, it is reset
* to be equal to \a offset.
*
* The file must exist prior to calling this function.
* Returns 0 on success, or \< 0 on error.
*/
int maFileTruncate(MAHandle file, int offset);

/**
* Write from memory to file.
* Returns 0 on success, or \< 0 on error.
*/
int maFileWrite(MAHandle file, const void* /* void* */ src, int len);

/**
* Write from data object to file.
* Returns 0 on success, or \< 0 on error.
*/
int maFileWriteFromData(MAHandle file, MAHandle data, int offset, int len);

/**
* Read from file to memory.
* Returns 0 on success, or \< 0 on error.
*/
int maFileRead(MAHandle file, void* /* void* */ dst, int len);

/**
* Read from file to data object.
* Returns 0 on success, or \< 0 on error.
*/
int maFileReadToData(MAHandle file, MAHandle data, int offset, int len);

/**
* Returns the file's current position, or \< 0 on error.
* \param file A file handle. The file must exist and must not be a directory.
*/
int maFileTell(MAHandle file);

/**
* Sets the file's position.
* \param file A file handle. The file must exist and must not be a directory.
* \param offset The offset of the new position,
* relative to the position specified by \a whence.
* \param whence One of the \link #MA_SEEK_SET MA_SEEK \endlink constants.
* \returns The new position, or \< 0 on error.
*/
int maFileSeek(MAHandle file, int offset, int whence);

/**
* Creates a listing of names of files and directories, or file systems.
* Call maFileListNext() repeatedly to retrieve the names. Call maFileListClose() to
* free the resources used.
*
* It is often useful to begin by listing the file systems.
*
* \param path The full path to a directory, or the empty string,
* which specifies that the root file systems should be listed.
* Which root file systems are listed vary between platforms.
* \param filter A string to match names with. May include an asterisk ('*') wildcard
* to represent 0 or more characters. Ignored if \a path is empty.
* \param sorting One of the \link #MA_FL_SORT_DATE MA_FL_SORT \endlink flags,
* OR'd with one of the \link #MA_FL_ORDER_ASCENDING MA_FL_ORDER \endlink flags.
* #MA_FL_SORT_NONE must not be combined with an
* \link #MA_FL_ORDER_ASCENDING MA_FL_ORDER \endlink flag.
* \note Sorting is not supported on JavaME. If it is attempted,
* this function will fail with #MA_FERR_SORTING_UNSUPPORTED.
*
* \returns A File Listing handle, or \< 0 on error.
*/
MAHandle maFileListStart(const char* path, const char* filter, int sorting);

/**
* Writes the name of the next file in the list to the specified buffer.
*
* The buffer may be too small to contain the name and the terminating zero;
* in that case, the internal list pointer remains unchanged,
* the buffer will not be filled,
* and you should allocate a bigger buffer and call this function again.
* You may call this function with NULL and 0 to simply retrieve the length of the name.
*
* If the name ends with a slash('/'), it is a directory.
*
* \returns The length of the name, excluding the terminating zero,
* or 0 if there are no more files, or \< 0 on error.
*/
int maFileListNext(MAHandle list, char* nameBuf, int bufSize);

/**
* Closes a file listing, freeing its resources.
*
* \returns 0.
*/
int maFileListClose(MAHandle list);

/**
* Sends a text SMS. Since this may cost money for the user,
* some platforms ask the user for permission,
* by displaying a modal Yes/No message box.
*
* \param dst The phone number to send the message to.
* \param msg The message to send. Only printable 7-bit ASCII characters are guaranteed
* to arrive unaltered. 8-bit Latin-1 characters should work in most cases.
*
* \returns 0 on success. A \link #CONNERR_GENERIC CONNERR \endlink code \< 0 on error.
* #CONNERR_FORBIDDEN if the user denied permission, and CONNERR_UNAVAILABLE if the
* device cannot send SMS messages.
*
* \note Will create a text file on PC platforms, instead of sending anything.
*/
int maSendTextSMS(const char* dst, const char* msg);

/**
 * Get frame buffer info. Use info.sizeInBytes to allocate memory for framebuffer.
 * \param info A pointer to an MAFrameBufferInfo structure, which the information will be written to.
 * \returns \<=0 on error.
 */
int maFrameBufferGetInfo(void* /* MAFrameBufferInfo* */ info);

/**
 * Pass a pointer to your framebuffer here. Each time an maUpdateScreen is performed,
 * this piece of memory will be copied to the actual screen memory.
 * \param data A pointer to the custom framebuffer.
 * \returns \<=0 on error.
 */
int maFrameBufferInit(const void* /* void* */ data);

/**
 * Close the framebuffer. The graphics sub-system will be set to use the standard framebuffer.
 * \returns \<=0 on error.
 */
int maFrameBufferClose(void);

/**
* Asynchronously accepts and opens a remote connection to a service.
*
* When a connection is accepted, a CONN event with #CONNOP_ACCEPT will be generated.
* If the accept was successful, MAConnEventData::result will be a handle to the new,
* normal connection. MAConnEventData::handle will be the server connection specified
* in the call to this function.
*
* To accept another connection after such an event, call this function again.
*
* \param serv A server connection, opened with maConnect.
* \returns \< 0 on error, \> 0 on success.
* \see maConnect
* \see maGetEvent
*/
int maAccept(MAHandle serv);

/**
* Sends the application to the background, unless it's already there.
* Generates a \link #EVENT_TYPE_FOCUS_LOST FOCUS_LOST \endlink event.
* \note Only available on multi-tasking operating systems.
*/
int maSendToBackground(void);

/**
* Brings the application to the foreground, unless it's already there.
* Generates a \link #EVENT_TYPE_FOCUS_LOST FOCUS_GAINED \endlink event.
* \note Only available on multi-tasking operating systems.
*/
int maBringToForeground(void);

/**
* Retrieves the value of a Java System Property, or a MoSync System Property.
*
* There are a few MoSync System Properties. They are unavailable on some devices.
* "mosync.imei" and "mosync.imsi" is the device's IMEI and IMSI number, respectively.
* The format of these numbers is not specified. It varies from device to device.
*
* "mosync.iso-639-1" and "mosync.iso-639-2" is the current language used by the system's UI.
* Multi-language applications should use this to determine which language to use.
*
* "mosync.winmobile.locale.SABBREVLANGNAME" is a windows mobile specific property.
* See http://msdn.microsoft.com/en-us/library/dd373831%28VS.85%29.aspx.
*
* See http://www.loc.gov/standards/iso639-2/php/code_list.php -
* The official list of valid ISO-639 codes (online).
*
* "mosync.device" is a description of the device. May include vendor, model name
* and firmware version.
* The format of this description is not specified. It varies from device to device.
*
* "mosync.device.name" is the name of the device. Usually set by the user.
*
* "mosync.device.UUID" is the Unique identifier of the device.
*
* "mosync.device.OS" is the operating system or platform that the device is using.
* It might contain version detail as well.
*
* "mosync.device.OS.version" is the the version of the operating system that is running on the device.
* It might contain minor revision information, e.g. 2.1Update-1.
*
* "mosync.network.type" it the type of the current active network connection.
* It can one of the following four values: "none", "wifi", "mobile", or "unknown".
*
* "mosync.path.local" is the absolute path to the local file system,
* on devices that have a local file system. The returned path has a
* trailing slash character ('/').
*
* \param key The property's key.
* \param buf A buffer where the value should be written.
* \param size The size of the buffer, in bytes.
* \returns The length of the value, including the terminating zero.
* If this is greater than \a size, the value will not have been copied to be buffer.
* In that case, you can make a bigger buffer and try again.
* If the property did not exist (System.getProperty() returned null),
* -2 will be returned.
*/
int maGetSystemProperty(const char* key, char* buf, int size);

/**
* Normally, when the first Internet connection is made in a Symbian application,
* the user must choose an Internet Access Point.
*
* This function saves the ID of the active IAP for this application.
* It will be used automatically the next time the application is started.
*
* \returns 1 if the ID was successfully saved. 0 if there is no active IAP. \< 0 on error.
* \note Implemented only on Symbian.
*/
int maIapSave(void);

/**
* Removes any saved IAP ID for this application.
* The next time the application is started,
* or the next time an Internet connection is made after a call to maIapShutdown(),
* the user will have to select a new IAP.
* \returns 1 if the ID was successfully removed. 0 if there was no saved ID. \< 0 on error.
* \note Implemented only on Symbian.
* \see maIapSave()
*/
int maIapReset(void);

/**
* Shuts down the active IAP.
* This has the effect of calling maConnClose() on all existing connections.
* \returns 1 if the IAP was successfully shut down. 0 if there was no active IAP. \< 0 on error.
* \note Implemented only on Symbian.
* \see maIapSave()
*/
int maIapShutdown(void);

/**
* Returns the current telephone network status.
* This is one of the \link #MA_NETWORK_UNKNOWN MA_NETWORK \endlink constants.
* #MA_NETWORK_HOME and #MA_NETWORK_ROAMING are the most interesting ones;
* all the others are variants of "not connected".
* Returns \< 0 on error.
* \see #EVENT_TYPE_NETWORK
* \note Implemented only on Symbian, 3rd edition and later.
*/
int maNetworkStatus(void);

/**
* Decides how IAP connection attempts should work.
*
* IAP connection attempts are made asynchronously by maConnect(),
* if there is no active IAP.
*
* This setting is reset to default when the application starts.
* \param type One of the \link #MA_IAP_METHOD_STANDARD MA_IAP_METHOD \endlink constants.
* \returns \< 0 on error.
* \note Implemented only on Symbian, 3rd edition and later.
*/
int maIapSetMethod(int type);

/**
* Decides which IAPs are visible in the IAP selection dialog.
* This setting is reset to default when the application starts.
* \param filter One of the \link #MA_IAP_FILTER_NOT_WLAN MA_IAP_FILTER \endlink constants.
* \returns \< 0 on error.
* \note Implemented only on Symbian, 3rd edition and later.
*/
int maIapSetFilter(int filter);

/**
* Returns the number of different output formats supported by the current device's camera.
* \< 0 if there is no camera support.
* 0 if there is camera support, but the format is unknown.
*/
int maCameraFormatNumber(void);

/**
* Stores an output format in \a fmt.
* \a index must be \>= 0 and \< the number returned by maCameraFormatNumber().
* \returns 0.
*/
int maCameraFormat(int index, void* /* MA_CAMERA_FORMAT* */ fmt);

/**
* Starts a fullscreen viewfinder.
* Returns 1 if the viewfinder was started, 0 if it was already running or \< 0 on error.
*/
int maCameraStart(void);

/**
* Stops the viewfinder.
* Returns 1 if the viewfinder was stopped, 0 if it was not running or \< 0 on error.
*/
int maCameraStop(void);

/**
* Adds a previewWidget to the camera controller in devices that support native UI.
* Returns 1 for success, \< 0 on error.
*/
int maCameraSetPreview(MAHandle widgetHandle);

/**
* Selects a Camera from the available ones.
* Returns 1 for success, \< 0 on error.
*/
int maCameraSelect(int cameraNumber);

/**
* Returns the number of available Camera on the device.
* Returns 1 for success, \< 0 on error.
*/
int maCameraNumber(void);

/**
* Requires the viewfinder to be active.
* Takes a snapshot using the specified format. The snapshot is
* stored as a new data object in the supplied placeholder.
* Returns 0 on success, or \< 0 on error.
*/
int maCameraSnapshot(int formatIndex, MAHandle placeholder);

/**
* Starts or stops recording video.
* \a stopStartFlag indicates the operation.
* 1 for start recording and 0 for stop recording.
* Returns 1 for success, \< 0 on error.
*/
int maCameraRecord(int stopStartFlag);

/**
* Sets a specified property on the Selected Camera.
*
* \param property A string representing which property to set.
* \param value The value which will be assigned to the property.
*
* \returns 1 for success and <0 for failure.
*/
int maCameraSetProperty(const char* property, const char* value);

/**
* retrives a specified property on the Selected Camera.
*
* \param property A string representing which property to set.
* \param value A buffer that will hold the value of the property, represented as a string.
* \param bufSize Size of the buffer.
*
* \returns 1 for success and <0 for failure.
*/
int maCameraGetProperty(const char* property, char* value, int bufSize);

/**
* Shows the virtual keyboard.
*/
int maShowVirtualKeyboard(void);

/**
* Displays a NativeUI text box, with
* "OK" and "Cancel" buttons (or equivalent command items
* if the OS uses other input methods).
* The user can enter text using the native input system.
*
* This function returns immediately, leaving the text box on-screen.
* While the text box is active, it will consume all key events.
* Other events, like networking, will still be handled normally.
*
* When the user activates one of the command items ("OK" or "Cancel"),
* a number of things will happen in order:
*
* The box's text will be copied to the buffer specified by \a outText.
* The text box will disappear.
* An event (#EVENT_TYPE_TEXTBOX) will be posted.
*
* The text box will allow input of up to (\a maxSize - 1) characters, but no more.
* Additional keypresses at that point may be ignored, or may cause an error message,
* at the discretion of the underlying implementation.
*
* \returns \>= 0 on success, \< 0 on error.
*
* \param title The box's title.
* \param inText When the text box is created, it is populated with this string.
* \param outText Pointer to a buffer. When the text box closes, the contents
* are copied to this buffer.
* \param maxSize The size of the buffer, in characters. Includes the terminating zero.
* \param constraints Rules for how text is entered into the box.
* Must be exactly one of the \link #MA_TB_TYPE_ANY MA_TB_TYPE \endlink constants, or'd with zero or more of the
* \link #MA_TB_FLAG_PASSWORD MA_TB_FLAG \endlink constants.
* \note Some combinations of constraint types and flags are useless or invalid.
*/
int maTextBox(const void* /* wchar* */ title, const void* /* wchar* */ inText, void* /* wchar* */ outText, int maxSize, int constraints);

/**
* Make MoSync send key-events for the specified key, even when
* the application does not have focus.
* Can only capture one key at a time.
* @param keyCode The \link #MAK_UNKNOWN MAK \endlink code for the key to capture.
* @return \< 0 on error.
* \see maKeyCaptureStop()
*/
int maKeyCaptureStart(int keyCode);

/**
* Stops any key capture in progress.
* @returns \< 0 on error.
* \see maKeyCaptureStart()
*/
int maKeyCaptureStop(void);

/**
 * Turn on sending of HomeScreen events. Off by default.
 * @return \< 0 on error.
 * \see #EVENT_TYPE_HOMESCREEN_SHOWN
 * \see #EVENT_TYPE_HOMESCREEN_HIDDEN
 * \see maHomeScreenEventsOff()
 */
int maHomeScreenEventsOn(void);

/**
 * Turn off sending of HomeScreen events. Off by default.
 * @return \< 0 on error.
 */
int maHomeScreenEventsOff(void);

/**
* Add shortcut icon to the device home screen.
* Available on Android only.
* @param name The name (label) of the shortcut to add.
* @return \< 0 on error.
*/
int maHomeScreenShortcutAdd(const char* name);

/**
* Remove shortcut icon from the device home screen.
* Available on Android only.
* @param name The name (label) of the shortcut to remove.
* @return \< 0 on error.
*/
int maHomeScreenShortcutRemove(const char* name);

/**
 * Add a notification item.
 * @deprecated use maNotificationCreate instead.
 * Note that there can only be one notification of type
 * #NOTIFICATION_TYPE_APPLICATION_LAUNCHER. Additional notification
 * types may be added in the future. This syscall is available
 * on Android only.
 *
 * @param type The #NOTIFICATION_TYPE_APPLICATION_LAUNCHER constant.
 * @param id The id of the notification. The id must be unique within
 * the application.
 * @param title Title of the notification.
 * @param text String to be displayed as part of the notification.
 * @return \< 0 on error or if the syscall is not available on the
 * current platform.
 */
int maNotificationAdd(int type, int id, const char* title, const char* text);

/**
 * Remove a notification item.
 * @deprecated use maNotificationDestroy instead.
 * Currently implemented only on Android.
 * @param id The id of the notification.
 * @return \< 0 on error.
 */
int maNotificationRemove(int id);

/**
 * Set the screen orientation.
 * Currently implemented only on Android and Windows Phone.
 * @param orientation One of the \link #SCREEN_ORIENTATION_LANDSCAPE
 * #SCREEN_ORIENTATION_PORTRAIT #SCREEN_ORIENTATION_DYNAMIC \endlink
 * constants.
 * @return \< 0 on error.
 */
int maScreenSetOrientation(int orientation);

/**
 * Enable/disable fullscreen mode.
 * Currently implemented only on Android.
 * @param fullscreen 1 for fullscreen on, 0 for fullscreen off.
 * @return \< 0 on error.
 */
int maScreenSetFullscreen(int fullscreen);

/**
* Registers this application for autostart on device reboot.
* Applications started this way start in the background;
* invisible to the user, unless they check the list of running applications.
* \returns 1 on success, 0 if already registered, \< 0 on error.
*/
int maAutostartOn(void);

/**
* Removes autostart registration for this application.
* \returns 1 on success, 0 if already unregistered, \< 0 on error.
*/
int maAutostartOff(void);

/**
* Set supported screen orientations.
* Currently implemented on iOS and WindowsPhone 7.1.
* @param orientations A bitmask consisting of flags describing the supported screen orientations.
* The bitmask can be created using \link #MA_SCREEN_ORIENTATION_PORTRAIT MA_SCREEN_ORIENTATION \endlink
* values.
* @return One of the next constants:
* - #MA_SCREEN_ORIENTATION_RES_OK
* - #MA_SCREEN_ORIENTATION_RES_NOT_SUPPORTED
* - #MA_SCREEN_ORIENTATION_RES_INVALID_VALUE
*/
int maScreenSetSupportedOrientations(int orientations);

/**
* Get supported screen orientations.
* Currently implemented on iOS and WindowsPhone 7.1.
* @return A bitmask consisting of flags describing the supported screen orientations.
* The bitmask is created using \link #MA_SCREEN_ORIENTATION_PORTRAIT MA_SCREEN_ORIENTATION \endlink
* values.
*/
int maScreenGetSupportedOrientations(void);

/**
* Get current screen orientation.
* Currently implemented on iOS and WindowsPhone 7.1.
* @return One of the \link #MA_SCREEN_ORIENTATION_PORTRAIT MA_SCREEN_ORIENTATION \endlink constants.
*/
int maScreenGetCurrentOrientation(void);

/**
 * Turn on sending of screen state events. Off by default.
 * Currently implemented only on Android.
 * @return \< 0 on error.
 * \see #EVENT_TYPE_SCREEN_STATE_ON
 * \see #EVENT_TYPE_SCREEN_STATE_OFF
 * \see maHomeScreenEventsOff()
 */
int maScreenStateEventsOn(void);

/**
 * Turn off sending of screen state events. Off by default.
 * Currently implemented only on Android.
 * @return \< 0 on error.
 */
int maScreenStateEventsOff(void);

/**
 * Lock device to be "awake". This means that the device
 * won't go to sleep while the app is running.
 * @param flag MA_WAKE_LOCK_ON or MA_WAKE_LOCK_OFF
 * @return \>0 on success, \< 0 on error (-1 if not available).
 */
int maWakeLock(int flag);

/**
 * Logs information about the state of all current resources.
 */
void maReportResourceInformation(void);

/**
 * @deprecated use #maAlert instead.
 * Displays a message to the user.
 * \param title The title of the message box shown
 * \param message The message should be short, not more than 40 characters,
 * to ensure its visibility on all screen sizes.
 */
void maMessageBox(const char* title, const char* message);

/**
* Displays a message to the user.
* It contains optional title, message and 3 buttons for selection.
* On Android the buttons point to a positive, negative or neutral action.
* When one of the buttons are clicked the alert is automatically dismissed.
* When a selection is made a #EVENT_TYPE_ALERT event is sent with the button index.
* \param title The title of the message box shown.
* \param message The message should be short, not more than 40 characters,
* to ensure its visibility on all screen sizes.
* \param button1 The text on the first button. On Android it indicates a positive selection.
* \param button2 The text on the second button. On Android it indicates a neutral selection.
* \param button3 The text on the third button. On Android it indicates that a negative selection.
*/
void maAlert(const char* title, const char* message, const char* button1, const char* button2, const char* button3);

/**
* Displays an image picker to the user.
* It's display depends on the platform.
* Note: when a selection is made a #EVENT_TYPE_IMAGE_PICKER event is sent.
*/
void maImagePickerOpen(void);

/**
* Displays a special kind of dialog that has a list of possible choices.
* The list of options is displayed as buttons on iOS, and as text views on Android.
* By clicking any option the dialog gets dismissed and a #EVENT_TYPE_OPTIONS_BOX_BUTTON_CLICKED event is sent back.
*
* \param title The dialog title.
* \param destructiveButtonTitle The destructive button text. This is an iOS specific feature: it has different color than the other options,
* and it indicates that it's action has destructive behaviour. On Android it is treated and it looks like a normal option.
* \param cancelButtonTitle The dialog's Cancel button text. If left empty, the dialog is not cancelable.
* \param otherButtonTitles The address to the buffer that stores the list of options.
* \param otherButtonTitlesSize The size of the buffer, in bytes.
*/
void maOptionsBox(const void* /* wchar* */ title, const void* /* wchar* */ destructiveButtonTitle, const void* /* wchar* */ cancelButtonTitle, const void* /* void* */ otherButtonTitles, int otherButtonTitlesSize);

/**
* \brief Enables a sensor and starts sending events if the sensor is available.
* If the sensor is already enabled this call will have no effect.
* \param sensor       The sensor which should be enabled.
* One of the \link #SENSOR_TYPE_ACCELEROMETER SENSOR_TYPE \endlink constants.
* \param interval     Time interval in which a sensor update shall be triggered.
* Can be one of the \link #SENSOR_RATE_FASTEST SENSOR_RATE \endlink constants or a time interval in milliseconds.
* \return    #SENSOR_ERROR_NONE  on success.
*            #SENSOR_ERROR_NOT_AVAILABLE if this sensor wasn't available.
*            #SENSOR_ERROR_INTERVAL_NOT_SET if the interval wasn't set, could be due to platform limitations.
*            #SENSOR_ERROR_ALREADY_ENABLED if the sensor already was enabled.
* \see #EVENT_TYPE_SENSOR
*/
int maSensorStart(int sensor, int interval);

/**
* \brief Disables a sensor so that it doesn't send any further events.
* \param sensor    The sensor which should be disabled.
* One of the \link #SENSOR_TYPE_ACCELEROMETER SENSOR_TYPE \endlink constants.
* \return    #SENSOR_ERROR_NONE on success.
*            #SENSOR_ERROR_NOT_ENABLED if this sensor wasn't enabled.
*            #SENSOR_ERROR_CANNOT_DISABLE if there was a problem disabling the sensor.
* \see #EVENT_TYPE_SENSOR
*/
int maSensorStop(int sensor);

/**
* Start listening to NFC events.
* \return MA_NFC_NOT_ENABLED if NFC is not enabled on this device,
* MA_NFC_NOT_AVAILABLE if NFC is not at all available, or
* 0 otherwise.
*/
int maNFCStart(void);

/**
* Stop listening to NFC events.
*/
void maNFCStop(void);

/**
* Reads the next available tag.
* @return A zero handle if no tag currently available
*/
MAHandle maNFCReadTag(MAHandle nfcContext);

/**
* Destroys the tag. Clients are responsible for calling
* this function for every corresponding maNFCReadTag.
*/
void maNFCDestroyTag(MAHandle tagHandle);

/**
* Connects to a tag, enabling further I/O operations to be
* performed on it.
*/
void maNFCConnectTag(MAHandle tagHandle);

/**
* Closes I/O operations for a tag, disabling further I/O operations to be
* performed on it.
*/
void maNFCCloseTag(MAHandle tagHandle);

/**
* Determines whether a tag is of a certain type.
* Use the constants prefixed with MA_NFC_TAG_TYPE_ to
* see the available tag types.
* \return > 0 if the tag is a the specified type, 0 if it is not,
* and MA_NFC_INVALID_TAG_TYPE if the tag type is not supported
* by this platform.
*/
int maNFCIsType(MAHandle tagHandle, int type);

/**
* To be able to call functions tag require the tag to be of
* a certain type (see maNFCIsType), the tag received
* must be converted to the proper type (see MA_NFC_TAG_TYPE_*
* constants).
* All typed tags returned by this function will be destroyed
* when the tag used to produce them is destroyed. Ie no
* explicit destruction of typed tags is necessary (but allowed).
* \return A handle if the type was convertable to the specified
* type.
*/
MAHandle maNFCGetTypedTag(MAHandle tagHandle, int type);

/**
* Starts a batch operation. No NFC I/O operations will be performed
* until maBatchCommit has been called.
* Note that only one active batch per tag is allowed.
* \param The tag on which to perform the batch operation.
* \return A non-zero value if a batch is already started for this tag or if a batch
* could not be started, 0 otherwise.
*/
int maNFCBatchStart(MAHandle tagHandle);

/**
* Asynchronously performs all operations since the last call to maNFCBatchStart. The event
* delivered will be of the EVENT_TYPE_NFC_BATCH_OP type and
* with an MANFCEventData containing the tag's handle.
* \param The handle to the tag that is in batch mode.
*/
void maNFCBatchCommit(MAHandle tagHandle);

/**
* Cancels all operations of the current batch.
* \param The handle to the tag that is in batch mode.
*/
void maNFCBatchRollback(MAHandle tagHandle);

/**
* Sends a message to a tag. The response will come as
* an EVENT_TYPE_NFC_TAG_DATA_READ event, with the
* handle set to the handle passed into this method
* and the result field set to the number of bytes
* actually read.
* \param tag The tag to communicate with.
* \param src The data to send.
* \param len The length of the data to send.
* \return 0 if the tag can be transceived to, < 0 otherwise.
*/
int maNFCTransceive(MAHandle tag, const void* /* void* */ src, int srcLen, void* /* void* */ dst, int* dstLen);

/**
* Makes a tag read-only (this operation cannot be reverted).
* The response will come as an EVENT_TYPE_NFC_TAG_READ_ONLY event, with the
* handle set to the handle passed into this method.
* \param tag The tag to make read only.
* \return MA_NFC_INVALID_TAG_TYPE if the handle given as argument
* cannot be made read-only.
*/
int maNFCSetReadOnly(MAHandle tag);

/**
* Checks whether a tag is read-only.
* \param tag The tag to check for read/write permissions.
* \return MA_NFC_INVALID_TAG_TYPE if this operation is
* not applicable, a value > 0 if it is read-only, or
* 0 if it is read-only.
*/
int maNFCIsReadOnly(MAHandle tag);

/**
* Returns the capacity/size of a tag,
* or -1 if unknown.
*/
int maNFCGetSize(MAHandle tag);

/**
* Reads an NDEF message from the given tag, which must
* be of the MA_NFC_TAG_TYPE_NDEF type.
* The response will come a an EVENT_TYPE_NFC_TAG_DATA_READ
* event with the handle set to the handle passed into this method
* and the result field set to 0 on success and a value < 0 on error.
* After receiving the event, clients may call
* maNFCGetNDEFMessage() to get the actual message.
* If the handle is not an NDEF tag, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCReadNDEFMessage(MAHandle tag);

/**
* Writes an NDEF message to the given tag, which must
* be of the MA_NFC_TAG_TYPE_NDEF or MA_NFC_TAG_TYPE_NDEF_FORMATTABLE type.
* The response will come a an EVENT_TYPE_NFC_TAG_DATA_WRITE
* event with the handle set to the handle passed into this method,
* the result field set to 0 on success and a value < 0 on error,
* and the dstId field set to the ndefMessage written.
* If the handle is not an NDEF tag, MA_NFC_INVALID_TAG_TYPE will be returned.
* \param tag The tag handle to write to
* \param ndefMessage The message to write
*/
int maNFCWriteNDEFMessage(MAHandle tag, MAHandle ndefMessage);

/**
* Creates a new NDEF message, to be used primarily by
* \code maNFCWriteDefMessage. \endcode
* \param recordCount The number of records in the created message
* \return The handle to the created NDEF message; clients are
* responsible for destroying the message.
*/
MAHandle maNFCCreateNDEFMessage(int recordCount);

/**
* Gets the NDEF message from a tag, which must
* be of the MA_NFC_TAG_TYPE_NDEF type.
* If the handle is not an NDEF tag, MA_NFC_INVALID_TAG_TYPE will be returned.
* (Please note the difference between an NDEF \b tag and an NDEF \b message.)
* \return The handle to the NDEF message, which
* may be subsequently used in NDEF specfic functions,
* or the zero handle if the tag has no NDEF message
* associated with it (in which case, clients may call
* maNFCReadNDEFMessage).
* IMPORTANT: Once the tag has been destroyed OR if
* maNFCReadNDEFMessage is called, any NDEF messages
* previously returned by this function
* will be destroyed with it and cannot
* be used.
*/
int maNFCGetNDEFMessage(MAHandle tag);

/**
* \return A handle to the ith NDEF record of an NDEF message.
* If the handle is not an NDEF message, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
MAHandle maNFCGetNDEFRecord(MAHandle ndefMessage, int ix);

/**
* \return The number of NDEF records in an NDEF message.
* If the handle is not an NDEF message, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCGetNDEFRecordCount(MAHandle ndefMessage);

/**
* Reads the variable length id of an NDEF record.
* \param ndefRecord the handle to the record to read from.
* \param dst Where the result should be written to.
* \param len The maximum length to write.
* \return The number of bytes written.
* If the handle is not an NDEF message record, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCGetNDEFId(MAHandle ndefRecord, void* /* void* */ dst, int len);

/**
* Reads the variable length payload of an NDEF record.
* \param ndefRecord the handle to the record to read from.
* \param dst Where the result should be written to.
* \param len The maximum length to write.
* \return The number of bytes written.
* If the handle is not an NDEF message record, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCGetNDEFPayload(MAHandle ndefRecord, void* /* void* */ dst, int len);

/**
* Returns the 3-bit TNF of an NDEF record.
* If the handle is not an NDEF message record, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCGetNDEFTnf(MAHandle ndefRecord);

/**
* Returns the variable length type field of an NDEF record.
* \param ndefRecord the handle to the record to read from.
* \param dst Where the result should be written to.
* \param len The maximum length to write.
* \return The number of bytes written.
* If the handle is not an NDEF message record, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCGetNDEFType(MAHandle ndefRecord, void* /* void* */ dst, int len);

/**
* Sets the variable length id of an NDEF record.
* If the handle is not an NDEF message record, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCSetNDEFId(MAHandle ndefRecord, const void* /* void* */ dst, int len);

/**
* Sets the variable length payload of an NDEF record.
* If the handle is not NDEF message record, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCSetNDEFPayload(MAHandle ndefRecord, const void* /* void* */ dst, int len);

/**
* Sets the 3-bit TNF of an NDEF record,
* If the handle is not NDEF message record, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCSetNDEFTnf(MAHandle ndefRecord, int tnf);

/**
* Returns the variable length type field of an NDEF record.
* If the handle is not NDEF message record, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCSetNDEFType(MAHandle ndefRecord, const void* /* void* */ dst, int len);

/**
* Authenticates a MIFARE Classic tag using the A or B key. Authentication must take place
* before reading/writing to a certain sector.
* The operation is asyncronous and will result in an EVENT_TYPE_NFC_TAG_AUTH_COMPLETE
* event, unless part of a batch operation.
* \param tagHandle The tag to authenticate
* \param keyType Either MA_NFC_MIFARE_KEY_A or MA_NFC_MIFARE_KEY_B.
* \param sectorIndex The sector to authenticate
* \param keySrc The address to the key to authenticate with
* \param keyLen The length of the key to authenticate with
* If the handle is not a Mifare Classic tag, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCAuthenticateMifareSector(MAHandle tagHandle, int keyType, int sectorIndex, const void* /* void* */ keySrc, int keyLen);

/**
* \return The number of sectors of a MIFARE Classic tag.
* If the handle is not a Mifare Classic tag, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCGetMifareSectorCount(MAHandle tagHandle);

/**
* Returns the number of blocks in a sector of a MIFARE Classic tag.
* \param sector The sector to get the number of blocks in.
* \return The number of blocks in a given sector.
* If the handle is not a Mifare Classic tag, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCGetMifareBlockCountInSector(MAHandle tagHandle, int sector);

/**
* Returns the first block of a sector of a MIFARE Classic tag.
* \param sector The sector of which to get the first block.
* \return The index of the first block of the sector is returned.
* If the handle is not a Mifare Classic tag, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCMifareSectorToBlock(MAHandle tagHandle, int sector);

/**
* Reads a number of blocks of a MIFARE Classic tag.
* The operation is asyncronous and will result in an EVENT_TYPE_NFC_TAG_READ
* event, unless part of a batch operation.
* \param firstBlock The first block to read from.
* \param dst The memory address to write to.
* \param len The number of bytes to read. Several blocks may be read, depending
* on len (A block is 16 bytes).
* If the handle is not a Mifare Classic tag, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCReadMifareBlocks(MAHandle tagHandle, int firstBlock, void* /* void* */ dst, int len);

/**
* Writes a number of blocks to a MIFARE Classic tag.
* The operation is asyncronous and will result in an EVENT_TYPE_NFC_TAG_WRITE
* event, unless part of a batch operation.
* \param firstBlock The first block to write to.
* \param dst The memory address to read from.
* \param len The number of bytes to write. Several blocks may be written, depending
* on len (A block is 16 bytes).
* If the handle is not a Mifare Classic tag, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCWriteMifareBlocks(MAHandle tagHandle, int firstBlock, const void* /* void* */ dst, int len);

/**
* Reads a number of blocks of a MIFARE Ultralight tag.
* The operation is asyncronous and will result in an EVENT_TYPE_NFC_TAG_READ
* event, unless part of a batch operation.
* \param firstBlock The first block to read from.
* \param dst The memory address to write to.
* \param len The number of bytes to read. Several pages may be read, depending
* on len (A page is 16 bytes).
* If the handle is not a Mifare Ultralight tag, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCReadMifarePages(MAHandle tagHandle, int firstPage, void* /* void* */ dst, int len);

/**
* Writes a number of blocks of a MIFARE Ultralight tag.
* The operation is asyncronous and will result in an EVENT_TYPE_NFC_TAG_WRITE
* event, unless part of a batch operation.
* \param firstBlock The first block to write to.
* \param dst The memory address to read from.
* \param len The number of bytes to write. Several pages may be written, depending
* on len (A page is 16 bytes).
* If the handle is not a Mifare Ultralight tag, MA_NFC_INVALID_TAG_TYPE will be returned.
*/
int maNFCWriteMifarePages(MAHandle tagHandle, int firstPage, const void* /* void* */ dst, int len);

/**
 * Open a database file. The database is created if it does not exist.
 * \note The application needs file read/write permissions to
 * access database files.
 * @param path Absolute path to the database file.
 * @return Handle to the database >0 on success, #MA_DB_ERROR on error.
 */
MAHandle maDBOpen(const char* path);

/**
 * Close a database.
 * @param databaseHandle Handle to the database.
 * @return #MA_DB_OK on success, #MA_DB_ERROR on error.
 */
int maDBClose(MAHandle databaseHandle);

/**
 * Executes an SQL statement. If the statement returns a
 * query result, a cursor handle is returned.
 * @param databaseHandle Handle to the database.
 * @param sql The SQL statement.
 * @return #MA_DB_ERROR on error, #MA_DB_OK on success,
 * > 0 if there is a cursor to a query result, in this
 * case the return value is the cursor handle.
 */
MAHandle maDBExecSQL(MAHandle databaseHandle, const char* sql);

/**
 * @copydoc maDBExecSQL()
 *
 * @param params Array of values to bind to parameters.
 * Parameters are specified by question marks (?) in the SQL statement.
 *
 * If this function returns a cursor, any text or blob values being
 * pointed to by elements of the array must remain valid until the
 * cursor has been destroyed by maDBCursorDestroy().
 *
 * The array itself does not need to remain valid after this
 * function returns.
 *
 * @param paramCount Number of elements in the array pointed to
 * by \a params.
 *
 * This function is available on iOS, Android, and in MoRE.
 */
MAHandle maDBExecSQLParams(MAHandle databaseHandle, const char* sql, const void* /* MADBValue* */ params, int paramCount);

/**
 * Destroys a cursor. You must call this function
 * when you are done with the cursor to release
 * its resources.
 * @param cursorHandle Handle to the cursor.
 * @return #MA_DB_OK on success, #MA_DB_ERROR on error.
 */
int maDBCursorDestroy(MAHandle cursorHandle);

/**
 * Move the cursor to the next row in the result set.
 * Note that you must call this function before retrieving
 * column data. The initial position of the cursor is
 * before the first row in the result set. If the result
 * set is empty, this function will return #MA_DB_NO_ROW.
 * @param cursorHandle Handle to the cursor.
 * @return #MA_DB_OK if successfully moved to next row,
 * #MA_DB_NO_ROW if there are no more rows in the result set,
 * #MA_DB_ERROR on error.
 */
int maDBCursorNext(MAHandle cursorHandle);

/**
 * Get the column value at the current row pointed to
 * by the cursor as a data object. Use this function for
 * blob data or text data.
 * @param cursorHandle Handle to the cursor.
 * @param columnIndex Index of the column to retrieve value from.
 * First column has index zero.
 * @param placeholder Handle created with maCreatePlaceholder.
 * A data object will be created with the column data, and the handle
 * will refer to that data.
 * @return #MA_DB_OK on success, #MA_DB_NULL if the column value
 * is NULL, #MA_#MA_DB_ERROR on error.
 */
int maDBCursorGetColumnData(MAHandle cursorHandle, int columnIndex, MAHandle placeholder);

/**
 * Get the column value at the current row pointed to
 * by the cursor as a text data buffer. Use this function for
 * text data.
 * @param cursorHandle Handle to the cursor.
 * @param columnIndex Index of the column to retrieve value from.
 * First column has index zero.
 * @param buffer Pointer to buffer to receive the data.
 * The result is NOT zero terminated.
 * @param bufferSize Max size of the buffer.
 * @return The actual length of the data, if the actual length
 * returned is > bufferSize, data was not copied (buffer too small),
 * returns #MA_DB_ERROR on other errors, returns #MA_DB_NULL if the
 * column value is NULL.
 */
int maDBCursorGetColumnText(MAHandle cursorHandle, int columnIndex, void* /* void* */ buffer, int bufferSize);

/**
 * Get the column value at the current row pointed to
 * by the cursor as an int value.
 * @param cursorHandle Handle to the cursor.
 * @param columnIndex Index of the column to retrieve value from.
 * First column has index zero.
 * @param value Pointer to int to receive the value.
 * @return #MA_DB_OK on success, #MA_DB_NULL if the column value
 * is NULL, #MA_#MA_DB_ERROR on error.
 */
int maDBCursorGetColumnInt(MAHandle cursorHandle, int columnIndex, int* value);

/**
 * Get the column value at the current row pointed to
 * by the cursor as a double value.
 * @param cursorHandle Handle to the cursor.
 * @param columnIndex Index of the column to retrieve value from.
 * First column has index zero.
 * @param value Pointer to double to receive the value.
 * @return #MA_DB_OK on success, #MA_DB_NULL if the column value
 * is NULL, #MA_#MA_DB_ERROR on error.
 */
int maDBCursorGetColumnDouble(MAHandle cursorHandle, int columnIndex, double* value);

/**
* @brief Creates a MAAudioData handle from a MoSync resource.
* @param mime The mime string for the resource. Can be NULL
* @param data The binary resource
* @param offset The offset in the binary file to where the data starts
* @param length The length of the data to use
* @param flags MA_AUDIO_DATA_STREAM means that the audio should be streamed
*	either from disk or over HTTP. This is only for music playback,
*	sound effects should have the flag set to 0.
* @attention Windows Phone only supports wave-files (see remarks here: http://msdn.microsoft.com/en-us/library/microsoft.xna.framework.audio.soundeffect.fromstream.aspx).
* @return A MAAudioData handle or <0 on error.
*/
MAAudioData maAudioDataCreateFromResource(const char* mime, MAHandle data, int offset, int length, int flags);

/**
* @brief Creates a MAAudioData handle from an URL or file path.
* @param mime The mime string for the resource. Can be NULL
* @param url The URL to the resource file. Accepts 'http://' or 'http://' for
*	streaming from internet. Without protcol file is assumed.
* @param flags MA_AUDIO_DATA_STREAM means that the audio should be streamed
*	either from disk or over HTTP. This is only for music playback,
*	sound effects should have this flag set to 0.
* @return A MAAudioData handle or <0 on error.
* @attention iOS Only supports loading local files.
*/
MAAudioData maAudioDataCreateFromURL(const char* mime, const char* url, int flags);

/**
* @brief Destroys a MAAudioData handle and releases used memory
*
* @param audioData The MAAudioData handle.
* @return MA_AUDIO_ERR_OK on success or <0 on fail.
*/
int maAudioDataDestroy(MAAudioData audioData);

/**
* @brief Creates a MAAudioInstance handle from a MAAudioData handle.
*
* @param audioData The MAAudioData handle
*
* @return A MAAudioInstance handle or <0 on error.
*
*/
MAAudioInstance maAudioInstanceCreate(MAAudioData audioData);

/**
* @brief Creates an MAAudioInstance that can be fed samples dynamically.
*
* @param sampleRate  The samplerate of the audio instance.
* @param numChannels Number of channels for the audio instance (1 means mono, 2 means stereo).
* @param bufferSize  The size of the underlying sample buffer (in samples).
*
* @return A MAAudioInstance handle or <0 on error.
*
*/
MAAudioInstance maAudioInstanceCreateDynamic(int sampleRate, int numChannels, int bufferSize);

/**
* @brief Submits a buffer of samples to a dynamic MAAudioInstance
*
* @param instanceThe handle to the MAAudioInstance
* @param bufferA pointer to the samples that should be submitted. Each sample must be a signed 16-bit short. When using more than one channel, the samples should be interleaved.
* @param numBytesThe number of bytes to read.
* @return <0 on error.
*
*/
int maAudioSubmitBuffer(MAAudioInstance instance, const void* /* void* */ buffer, int numBytes);

/**
* @brief Gets the pending buffer count for the dynamic MAAudioInstance
*
* @param instanceThe handle to the MAAudioInstance
* @return <0 on error, otherwise the pending buffer count.
*
*/
int maAudioGetPendingBufferCount(MAAudioInstance instance);

/**
* @brief Destroys a MAAudioInstance handle releases used memory
* @param audioInstance The MAAudioInstance handle
* @return MA_AUDIO_ERR_OK on success,
*	<0 on error.
*/
int maAudioInstanceDestroy(MAAudioInstance audioInstance);

/**
* @brief Returns the lenght in milliseconds for this instance.
* @param audio The MAAudioInstance handle
* @return The lenght in milliseconds,
*	<0 on error.
*/
int maAudioGetLength(MAAudioInstance audio);

/**
* @brief Sets the number of loops this instance will play
*
* @param audio The MAAudioInstance handle
* @param loops 0 means play once,
*	>0 means loop 'loops' times,
* -1 means loop forever.
* @return MA_AUDIO_ERR_OK on success, <0 on error.
*/
int maAudioSetNumberOfLoops(MAAudioInstance audio, int loops);

/**
* @brief Prepares an MAAudioInstance before playback.
* If prepared asynchronous the call will return directly, but the
* MAAudioInstance will not be ready for playback until
* an EVENT_TYPE_AUDIO_PREPARED event has been sent.
* If synchronous the call will block execution until finished
* and the MAAudioInstance will be ready directly.
* @attention If a streaming audio is already playing and a new one is being prepared,
* on some platforms the playing audio will stop.
*
* @param audio The MAAudioInstance handle
* @param async 0 if synchronus, 1 if asynchronous
* @return MA_AUDIO_ERR_OK on success
*	MA_AUDIO_ERR_INVALID_INSTANCE on invalid audio instance
*	MA_AUDIO_ERR_ALREADY_PREPARED on already prepared audio instance
*/
int maAudioPrepare(MAAudioInstance audio, int async);

/**
* @brief Plays the current MAAudioInstance.
* @attention If the audio hasn't been prepared, on Android, it will be synchrounous
*	prepared before playing, this means that there might be a delay before
*	this call returns. Always make sure that your audio has been properly
*	prepared before playing.
* @param audio The MAAudioInstance handle.
* @return MA_AUDIO_ERR_OK on success, <0 on error.
*/
int maAudioPlay(MAAudioInstance audio);

/**
* @brief Sets the current position in milliseconds.
* @param audio The MAAudioInstance handle.
* @param milliseconds The number of milliseconds from the start.
* @return MA_AUDIO_ERR_OK on success,
*	<0 on error.
*/
int maAudioSetPosition(MAAudioInstance audio, int milliseconds);

/**
* @brief Gets the current position in milliseconds.
* @param audio The MAAudioInstance handle.
* @return The current playing position in milliseconds,
*	<0 on error.
*/
int maAudioGetPosition(MAAudioInstance audio);

/**
* @brief Sets the volume for this MAAudioInstance.
* @param audio The MAAudioInstance handle.
* @return MA_AUDIO_ERR_OK on success,
*	<0 on error
*/
int maAudioSetVolume(MAAudioInstance audio, float volume);

/**
* @brief Pauses the MAAudioInstance if it's playing.
* It will stay prepared, so the sound can be resumed at any time using maAudioPlay.
* @param audio The MAAudioInstance handle.
* @return MA_AUDIO_ERR_OK on success, <0 on error.
*/
int maAudioPause(MAAudioInstance audio);

/**
* @brief Stops the the audio instance and sets the position to the beginning.
* The audio instance might be unprepared, meaning all it's prepared buffers might
* be released.
* @param audio The MAAudioInstance handle.
* @return MA_AUDIO_ERR_OK on success, <0 on error.
*/
int maAudioStop(MAAudioInstance audio);

/**
* Enable panics for programmer errors.
* Such panics are enabled by default, but can be disabled by maSyscallPanicsDisable().
* If a panic is raised a message will be displayed to the user and the program will be shut down.
* \return #RES_OK.
*/
int maSyscallPanicsEnable(void);

/**
* Disable panics for programmer errors.
* Some errors, such as feeding invalid parameters to certain syscalls,
* can be prevented by the programmer. By default, these errors cause a MoSync Panic.
* After this function is called,
* if such an error occurs in a syscall, an error code will be returned by the syscall and the
* program will continue running.
* Panics can be re-enabled by maSyscallPanicsEnable().
* \return #RES_OK.
*/
int maSyscallPanicsDisable(void);

/**
* \brief Creates a new banner.
* \param bannerSize One of the MA_ADS_SIZE_ constants. Only for Android and WP7.1 platforms.
* \param publisherID Only for Android and WP 7.1 platforms.
* This param is ignored on iOS platform.
*
* \note A banner is a widget type object.
* For more info see Widget API.
*
* \returns
*  - #MA_ADS_RES_UNSUPPORTED if ads are not supported on current system.
*  - #MA_ADS_RES_ERROR if a error occurred while creating the banner widget.
*  - a handle to a new banner widget(the handle value is >= 0).
*/
int maAdsBannerCreate(int bannerSize, const char* publisherID);

/**
* \brief Destroy a banner.
*
* \param bannerHandle Handle to a banner.
*
* \returns One of the next constants:
* - #MA_ADS_RES_OK if no error occurred.
* - #MA_ADS_RES_INVALID_BANNER_HANDLE if the banner handle is invalid.
*/
int maAdsBannerDestroy(MAHandle bannerHandle);

/**
* \brief Add a banner to a layout widget.
*
* \param bannerHandle Handle to a banner.
* \param layoutHandle Handle to a layout.
*
* \returns One of the next constants:
* - #MA_ADS_RES_OK if no error occurred.
* - #MA_ADS_RES_INVALID_BANNER_HANDLE if the banner handle is invalid.
* - #MA_ADS_RES_INVALID_LAYOUT_HANDLE if the layout handle is invalid.
*/
int maAdsAddBannerToLayout(MAHandle bannerHandle, MAHandle layoutHandle);

/**
* \brief Remove a banner from a layout widget.
*
* \param bannerHandle Handle to a banner.
* \param layoutHandle Handle to a layout.
*
* \returns One of the next constants:
* - #MA_ADS_RES_OK if no error occurred.
* - #MA_ADS_RES_INVALID_BANNER_HANDLE if the banner handle is invalid.
* - #MA_ADS_RES_INVALID_LAYOUT_HANDLE if the layout handle is invalid.
*/
int maAdsRemoveBannerFromLayout(MAHandle bannerHandle, MAHandle layoutHandle);

/**
* \brief Set a banner property.
*
* \param bannerHandle Handle to the banner.
* \param property A string representing which property to set.
* \param value The value that will be assigned to the property.
*
* \returns One of the next result codes:
* - #MA_ADS_RES_OK if no error occurred.
* - #MA_ADS_RES_INVALID_BANNER_HANDLE if the banner handle is invalid.
* - #MA_ADS_RES_INVALID_PROPERTY_NAME if the property name is not valid.
* - #MA_ADS_RES_INVALID_PROPERTY_VALUE if the property value is not valid.
*/
int maAdsBannerSetProperty(MAHandle bannerHandle, const char* property, const char* value);

/**
* \brief Retrieves a specified property from the given banner.
*
* \param bannerHandle Handle to the banner.
* \param property A string representing for which property to get the value.
* \param value A buffer that will hold the value of the property, represented as a string.
* \param bufSize Size of the buffer.
*
* \returns One of the next result codes:
* - #MA_ADS_RES_OK if no error occurred.
* - #MA_ADS_RES_INVALID_BANNER_HANDLE if the banner handle is invalid.
* - #MA_ADS_RES_INVALID_PROPERTY_NAME if the property name is not valid.
* - #MA_ADS_RES_INVALID_STRING_BUFFER_SIZE if the buffer size was to small.
*/
int maAdsBannerGetProperty(MAHandle bannerHandle, const char* property, char* value, int bufSize);

/**
* \brief Creates a new local notification object.
*
* \returns
*  - #MA_NOTIFICATION_RES_UNSUPPORTED if the notifications are not supported on current system.
*  - #MA_NOTIFICATION_RES_ERROR if a error occurred while creating the notification object.
*  - a handle to a new local notification object(the handle value is >= 0).
*/
MAHandle maNotificationLocalCreate(void);

/**
* \brief Destroy a local notification object.
*
* \param notificationHandle Handle to a local notification object.
*
* \returns One of the next constants:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_INVALID_HANDLE if the notificationHandle is invalid.
*/
int maNotificationLocalDestroy(MAHandle notificationHandle);

/**
* \brief Set a local notification property.
*
* \param notificationHandle Handle to the local notification object.
* \param property A string representing which property to set.
* \param value The value that will be assigned to the property.
*
* \returns One of the next result codes:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_INVALID_HANDLE if the notificationHandle is invalid.
* - #MA_NOTIFICATION_RES_INVALID_PROPERTY_NAME if the property name is not valid.
* - #MA_NOTIFICATION_RES_INVALID_PROPERTY_VALUE if the property value is not valid.
* - #MA_NOTIFICATION_RES_ALREADY_SCHEDULED if the notification is scheduled.
*/
int maNotificationLocalSetProperty(MAHandle notificationHandle, const char* property, const char* value);

/**
* \brief Retrieves a specified property from the given notification object.
*
* \param notificationHandle Handle to the notification object.
* \param property A string representing for which property to get the value.
* \param value A buffer that will hold the value of the property, represented as a string.
* \param bufSize Size of the buffer.
*
* \returns One of the next result codes:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_INVALID_HANDLE if the notificationHandle is invalid.
* - #MA_NOTIFICATION_RES_INVALID_PROPERTY_NAME if the property name is not valid.
* - #MA_NOTIFICATION_RES_INVALID_STRING_BUFFER_SIZE if the buffer size was to small.
*/
int maNotificationLocalGetProperty(MAHandle notificationHandle, const char* property, char* value, int bufSize);

/**
* \brief Schedules a local notification for delivery at its encapsulated date and time.
* By default, the notifications are displayed to the user only if the application is
* in background. But on Android you can configure this by setting the
* #MA_NOTIFICATION_LOCAL_DISPLAY_FLAG property.
*
* \param notificationHandle Handle to a local notification object.
*
* \returns One of the next constants:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_INVALID_HANDLE if the notificationHandle is invalid.
* - #MA_NOTIFICATION_RES_ALREADY_SCHEDULED if the notification was already scheduled.
*/
int maNotificationLocalSchedule(MAHandle notificationHandle);

/**
* \brief Cancels the delivery of the specified scheduled local notification.
* Calling this method also programmatically dismisses the notification if
* it is currently displaying an alert.
*
* \param notificationHandle Handle to a local notification object.
*
* \returns One of the next constants:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_INVALID_HANDLE if the notificationHandle is invalid.
* - #MA_NOTIFICATION_RES_CANNOT_UNSCHEDULE if the notification was not scheduled.
*/
int maNotificationLocalUnschedule(MAHandle notificationHandle);

/**
* \brief Registers the current application for receiving push notifications.
* Note that on Android you might want to store the registrationID that you receive,
* and call this again only if it expires at some point.
* On Android: if the registration is succesfful, the application receives a registration ID.
* The application should store this ID for later use. Note that Google may periodically refresh
* the registration ID, so you should design your application with the understanding that this
* syscall  may be called multiple times.
* \param pushNotificationTypes A bit mask specifying the types of notifications
* the application accepts.
* See \link #MA_NOTIFICATION_PUSH_TYPE_BADGE MA_NOTIFICATION_PUSH_TYPE_ \endlink
* for valid bit-mask values.
* On Android platform this param is ignored.
* \param senderId Your projectId obtained from here:
* http://developer.android.com/guide/google/gcm/gs.html#create-proj
* For old applications, this param was set as the ID of the account
* authorized to send messages to the application, typically the email
* address of an account set up by the application's developer.
* Even though setting the senderId as the accountID was deprecated, old
* Android applications still support it.
* On iOS platform this param is ignored.
*
* Example: maNotificationPushRegister(
* PUSH_NOTIFICATION_TYPE_BADGE | PUSH_NOTIFICATION_TYPE_ALERT, "yoursenderId_here");
*
* \returns One of the next constants:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_ALREADY_REGISTERED if the application is already registered for
* receiving push notifications.
* - #MA_NOTIFICATION_RES_UNSUPPORTED if notifications are not supported on current platform.
*/
int maNotificationPushRegister(MAHandle pushNotificationTypes, const char* senderId);

/**
* \brief Unregister application for push notifications.
*
* \returns One of the next constants:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_NOT_REGISTERED if the application was not registered for receiving
* push notification.
*/
int maNotificationPushUnregister(void);

/**
* \brief Gets the latest push notification registration response.
* \param registrationMesssage The registrationID if the registration was successfull, or the error messsage otherwise.
* \param registrationMessageSize Size of the buffer.
* \returns  One of the next constants:
* - #MA_NOTIFICATION_RES_OK if the application registered successfully.
* - #MA_NOTIFICATION_RES_REGISTRATION_NOT_CALLED if maNotificationPushRegister was not called.
* - #MA_NOTIFICATION_RES_REGISTRATION_MESSAGE_BUF_TOO_SMALL if the buffer is too small.
* - #MA_NOTIFICATION_RES_ERROR if registration has failed.
*/
int maNotificationPushGetRegistration(char* registrationMesssage, int registrationMessageSize);

/**
* \brief Fills pushNotificationData struct with the values for a given push notification.
* Note: Call maNotificationPushDestroy() in order to destroy the push notification object.
*
* \param pushNotificationHandle Handle to a given push notification.
* \param pushNotificationData A struct that will contain the values for a given push notification.
*
* \return One of the next contants:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_INVALID_HANDLE if the pushNotificationHandle is invalid.
* - #MA_NOTIFICATION_RES_INVALID_STRING_BUFFER_SIZE if at least one of the buffers from
* pushNotificationData are too small.
*/
int maNotificationPushGetData(MAHandle pushNotificationHandle, void* /* MAPushNotificationData* */ pushNotificationData);

/**
* \brief Destroy a push notification object.
*
* \param notificationHandle Handle to a push notification object.
*
* \returns One of the next constants:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_INVALID_HANDLE if the notificationHandle is invalid.
*/
int maNotificationPushDestroy(MAHandle notificationHandle);

/**
* \brief Set the number currently set as the badge of the application icon in Springboard.
* Platform: iOS only.
*
*\param applicationIconBadgeNumber Set to zero to hide the badge number. The default is zero.
* If this value is negative the syscall will do nothing.
*/
void maNotificationSetIconBadge(int applicationIconBadgeNumber);

/**
* \brief Get the number currently set as the badge of the application icon in Springboard.
* Platform: iOS only.
*
*\return The number displayed as the badge of the application.
*/
int maNotificationGetIconBadge(void);

/**
* \brief Set the ticker text in the notification status bar for incoming push notifications.
* This call does not alter already received notifications.
* Platform: Android only.
*
* \param tickerText The text that flows by in the status bar when the notification first activates.
* \return One of the next constants:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_ERROR.
*/
int maNotificationPushSetTickerText(const char* tickerText);

/**
* \brief Set the  message title in the notification area for incoming push notifications.
* This call does not alter already received notifications.
* Platform: Android only.
*
* \param messageTitle The title that goes in the expanded entry of the notification.
* \return One of the next constants:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_ERROR.
*/
int maNotificationPushSetMessageTitle(const char* messageTitle);

/**
* \brief Set the display flags applied to the incoming push notifications.
* Note that regardless of this setting, the #EVENT_TYPE_PUSH_NOTIFICATION event
* will be received for each incoming notification.
* #MA_NOTIFICATION_DISPLAY_FLAG_DEFAULT is enabled by default.
* Platform: Android only.
* \param displayFlag One of the constants:
* - #MA_NOTIFICATION_DISPLAY_FLAG_DEFAULT Which is enabled by default.
* - #MA_NOTIFICATION_DISPLAY_FLAG_ANYTIME.
* \return One of the next constants:
* - #MA_NOTIFICATION_RES_OK if no error occurred.
* - #MA_NOTIFICATION_RES_ERROR if push notifications are not supported,
* or the input value is not valid.
*/
int maNotificationPushSetDisplayFlag(int displayFlag);

/**
* \brief Sets the properties to the Native Image Picker.
* \param property A string representing which property to set.
*  One of the \link #MA_CAPTURE_VIDEO_QUALITY MA_CAPTURE \endlink constants.
* \param value The value that will be assigned to the property.
*
* \returns One of the next constants:
*  - #MA_CAPTURE_RES_OK if no error occurred.
*  - #MA_CAPTURE_RES_INVALID_PROPERTY if the property name is not valid.
*  - #MA_CAPTURE_RES_INVALID_PROPERTY_VALUE if the property value is not valid.
*  - #MA_CAPTURE_RES_MAX_DURATION_NOT_SUPPORTED if the duration limit is not supported ( Android only).
*/
int maCaptureSetProperty(const char* property, const char* value);

/**
* \brief Retrieves the properties from the Native Image Picker.
*
* \param property A string representing which property to get.
*  One of the \link #MA_CAPTURE_VIDEO_QUALITY MA_CAPTURE \endlink constants.
* \param value A buffer that will hold the value of the property, represented as a string.
* \param bufSize Size of the buffer.
*
* \returns One of the next constants:
* - #MA_CAPTURE_RES_OK if no error occurred.
* - #MA_CAPTURE_RES_INVALID_PROPERTY if the property name is not valid.
* - #MA_CAPTURE_RES_INVALID_STRING_BUFFER_SIZE if the buffer size was to small.
* - #MA_CAPTURE_RES_PROPERTY_VALUE_UNDEFINED if the property was not previously set ( Android only).
* - #MA_CAPTURE_RES_MAX_DURATION_NOT_SUPPORTED if the duration limit is not supported ( Android only).
*/
int maCaptureGetProperty(const char* property, char* value, int bufSize);

/**
* \brief Performs a capture action.
*
* The specified action is performed and the result is delivered
* asynchronously in an \link #EVENT_TYPE_CAPTURE event. The content
* of the event is an #MACaptureEventData data structure. The type
* field contains the type of capture event (#MA_CAPTURE_EVENT_TYPE_IMAGE,
* #MA_CAPTURE_EVENT_TYPE_VIDEO, #MA_CAPTURE_EVENT_TYPE_CANCEL), and the
* handle field contains a handle to the capture object. Save a
* captured image using function #maCaptureWriteImage. Access a
* captured video using function #maCaptureGetVideoPath. Free the capture
* object using function #maCaptureDestroyData.
*
* Note: The image format for #MA_CAPTURE_EVENT_TYPE_IMAGE is JPEG on Android
* and PNG on iOS.
*
* Platforms: Android an iOS.
*
* \param action One of the \link #MA_CAPTURE_ACTION_TAKE_PICTURE MA_CAPTURE_ACTION \endlink constants.
*
* \returns One of the next constants:
*  - #MA_CAPTURE_RES_OK if no error occurred.
*  - #MA_CAPTURE_RES_INVALID_ACTION if the given action is invalid.
*  - #MA_CAPTURE_RES_CAMERA_NOT_AVAILABLE if camera is not available at the moment.
*  - #MA_CAPTURE_RES_VIDEO_NOT_SUPPORTED if video recording is not supported.
*  - #MA_CAPTURE_RES_PICTURE_NOT_SUPPORTED if camera picture mode is not supported.
*/
int maCaptureAction(int action);

/**
* \brief Save a image data object to a file.
* \param handle Handle to an image data object.
* \param fullPath A buffer containing the a full path where the file will be created.
* \param fullPathBufSize The size of the fullPath buffer.
*
* \returns One of the next constants:
*  - #MA_CAPTURE_RES_OK if no error occurred.
*  - #MA_CAPTURE_RES_INVALID_HANDLE if the given handle was invalid.
*  - #MA_CAPTURE_RES_FILE_INVALID_NAME if the fullPath param is invalid.
*  - #MA_CAPTURE_RES_FILE_ALREADY_EXISTS if the file already exists.
*/
int maCaptureWriteImage(MAHandle handle, const char* fullPath, int fullPathBufSize);

/**
* \brief Get full path to a taken picture.
* Available on Android only.
* \param handle Handle to an image data object.
* \param buffer Will contain the full path of the image file.
* \param bufferSize Maximum size of the buffer.
*
* \returns One of the next constants:
*  - #MA_CAPTURE_RES_OK if no error occurred.
*  - #MA_CAPTURE_RES_INVALID_HANDLE if the given handle was invalid.
*  - #MA_CAPTURE_RES_INVALID_STRING_BUFFER_SIZE if the buffer size was to small.
*/
int maCaptureGetImagePath(MAHandle handle, char* buffer, int bufferSize);

/**
* \brief Get full path to a recorded video.
* \param handle Handle to a video data object.
* \param buffer Will contain the full path to the video file.
* \param bufferSize Maximum size of the buffer.
*
* \returns One of the next constants:
*  - #MA_CAPTURE_RES_OK if no error occurred.
*  - #MA_CAPTURE_RES_INVALID_HANDLE if the given handle was invalid.
*  - #MA_CAPTURE_RES_INVALID_STRING_BUFFER_SIZE if the buffer size was to small.
*/
int maCaptureGetVideoPath(MAHandle handle, char* buffer, int bufferSize);

/**
* \brief Destroys a image/video data object.
* \param handle Handle to a image/video data object.
*
* \returns One of the next constants:
*  - #MA_CAPTURE_RES_OK if no error occurred.
*  - #MA_CAPTURE_RES_INVALID_HANDLE if the given handle was invalid.
*/
int maCaptureDestroyData(MAHandle handle);

/**
* \brief Check if in app purchase is supported/enabled on a device.
* It does not trigger any asynchronous responses.
* Platform: Android and iOS.
*
* \returns One of the next result codes:
* - #MA_PURCHASE_RES_OK if purchase is supported/allowed on the device.
* - #MA_PURCHASE_RES_DISABLED if purchase is not allowed/enabled.
* - #MA_PURCHASE_RES_UNAVAILABLE if purchase is not supported on the device.
* - #MA_PURCHASE_RES_OUT_OF_DATE if GooglePlay application is out of date.
* - #MA_PURCHASE_RES_CONNECTION_ERROR if there was an error connecting with the GooglePlay application.
*/
int maPurchaseSupported(void);

/**
* \brief Create a product object asynchronously.
* The product is validated only on iOS. On the other hand, on Android the validation
* will be done during a maPurchaseRequest.
*
* A #EVENT_TYPE_PURCHASE will be sent after calling this syscall.
* The event will contain a MAPurchaseEventData struct object. The type member object
* contained by the struct will be #MA_PURCHASE_EVENT_PRODUCT_CREATE. The state member
* object can have one of the following values:
* - #MA_PURCHASE_STATE_PRODUCT_VALID
*	- on iOS if the product was validated by the App Store,
*	- on Android if the product was internally allocated.
    * - #MA_PURCHASE_STATE_PRODUCT_INVALID the product is not valid in the App Store.
    * - #MA_PURCHASE_STATE_DISABLED purchase is not supported/disabled on the device.
    * - #MA_PURCHASE_STATE_DUPLICATE_HANDLE the given productHandle already exists.
* Use #maCreatePlaceholder() to generate a new one.
*
* \param productHandle A valid handle that will be used to indetify the new product.
* It must be unique. It is highly recommended to create it using #maCreatePlaceholder().
* \param productID String that identifies the product. This string must be used by the
* App Store / Google Play to identify the product.
*/
void maPurchaseCreate(MAHandle productHandle, const char* productID);

/**
* Set your Google Play public key to the application. This enables the application
* to verify the signature of the transaction information that is returned from Google Play.
* Must be set in order to be able to request purchases.
* Platform: Android.
*
* \param developerPublicKey Base64-encoded public key, that can be found on the Google
* Play publisher account page, under Licensing & In-app Billing panel in Edit Profile.
*
* \returns One of the next result codes:
* - #MA_PURCHASE_RES_OK if the key was set.
* - #MA_PURCHASE_RES_MALFORMED_PUBLIC_KEY if the key is invalid.
*/
int maPurchaseSetPublicKey(const char* developerPublicKey);

/**
* Request the user to purchase a product.
* The system will handle the proccess of purchasing.
* Note: if there are other requests in progress, the requests will be queued.
* If the product is restored on iOS platform it cannot be purchased again.
*
* A #EVENT_TYPE_PURCHASE will be sent after calling this syscall.
* The event will contain a MAPurchaseEventData struct object. The type member object
* contained by the struct is #MA_PURCHASE_EVENT_REQUEST. The state member object can
* have one of the following values:
    * - #MA_PURCHASE_STATE_DISABLED purchase is not supported/disabled on the device.
* - #MA_PURCHASE_STATE_FAILED if the operation has failed. Check the errorCode member object
* for more information about the reason.
* - #MA_PURCHASE_STATE_IN_PROGRESS indicates that the transaction has been received by
* the App Store / Google Play.
* - #MA_PURCHASE_STATE_COMPLETED indicates that the transaction has been successfully processed.
*
* \param productHandle Handle to the product to be purchased.
* \param quantity How many products to be purchased. Must be a value greater than zero.
* This param is ignored on Android, as any purchase request can handle only one item.
*/
void maPurchaseRequest(MAHandle productHandle, int quantity);

/**
* Verify if the receipt came from Apple App Store / Google Play.
* Make sure that the product is purchased before calling this syscall.
*
* A #EVENT_TYPE_PURCHASE will be sent after calling this syscall.
* The event will contain a MAPurchaseEventData struct object. The type member object
* contained by the struct is #MA_PURCHASE_EVENT_VERIFY_RECEIPT .The state member object
* can have one of the following values:
    * - #MA_PURCHASE_STATE_DISABLED purchase is not supported/disabled on the device.
* - #MA_PURCHASE_STATE_RECEIPT_VALID indicates that the transaction has been validated
* by the App Store / Google Play.
* - #MA_PURCHASE_STATE_RECEIPT_INVALID indicates that the transaction is invalid.
* - #MA_PURCHASE_STATE_RECEIPT_ERROR indicates that an error occurred while verifying
* the receipt. Check the errorCode member object for more information about the reason.
    *
* \param productHandle Handle to the product that has been purchased.
*/
void maPurchaseVerifyReceipt(MAHandle productHandle);

/**
* Get a field value contained by the receipt.
* Make sure that the given product has a valid receipt.
* Call the maPurchaseVerifyReceipt() syscall and wait for a #MA_PURCHASE_STATE_RECEIPT_VALID
* purchase state.
*
* \param productHandle Handle to the product that has been purchased.
* \param property The name of the field.
* \param buffer Will be filled with the filed value.
* \param bufferSize The maximum size of the buffer, in bytes.
* \return The number of written bytes into buffer(a value greater than zero), or one
* of the following error codes(a value smaller that zero):
* - #MA_PURCHASE_RES_INVALID_HANDLE if the productHandle is invalid.
* - #MA_PURCHASE_RES_RECEIPT_NOT_AVAILABLE if the product has not been purchased.
* - #MA_PURCHASE_RES_DISABLED if purchase is not allowed/enabled.
*/
int maPurchaseGetField(MAHandle productHandle, const char* property, char* buffer, int bufferSize);

/**
* Set the store url used for verifing the receipe on iOS platform.
* Platform: iOS.
* \param url Store url.
*/
void maPurchaseSetStoreURL(const char* url);

/**
* Get product id using a product handle.
*
* \param productHandle Handle to the given product.
* \param buffer Will contain the product id.
* \param bufferSize Maximum size of the buffer.
* \return In case of error:
* - #MA_PURCHASE_RES_INVALID_HANDLE if productHandle is invalid.
* - #MA_PURCHASE_RES_BUFFER_TOO_SMALL if the given handle is too small.
* In case of success returns the number of written bytes.
*/
int maPurchaseGetName(MAHandle productHandle, char* buffer, int bufferSize);

/**
* Restore transactions that were previously finished so that you can process them again.
* For example, your application would use this to allow a user to unlock previously purchased
* content onto a new device.
*
* A #EVENT_TYPE_PURCHASE will be sent after calling this syscall.
* The event will contain a #MAPurchaseEventData struct object. The type member object
* contained by the struct will be #MA_PURCHASE_EVENT_RESTORE. The state member object
* can have one of the following values:
    * - #MA_PURCHASE_STATE_RESTORE_ERROR indicates that an error ocurred while restoring the
    * products. Check the struct errorCode member object to see why it failed.
* - #MA_PURCHASE_STATE_PRODUCT_RESTORED indicates that a product has been restored.
* The productHandle member object will contain a handle to the new product.
* Make sure you destroy the product and after done working with it.
*/
void maPurchaseRestoreTransactions(void);

/**
* Destroy a product object.
*
* \param productHandle Handle to the product to destroy.
* \return One of the following values:
* - #MA_PURCHASE_RES_OK if product has been detroyed.
* - #MA_PURCHASE_RES_INVALID_HANDLE if the productHandle is invalid.
*/
int maPurchaseDestroy(MAHandle productHandle);

// End of IOCtls.
typedef signed char khronos_int8_t;
typedef unsigned char khronos_uint8_t;
typedef short int khronos_int16_t;
typedef short unsigned int khronos_uint16_t;
typedef long int khronos_intptr_t;
typedef long unsigned int khronos_uintptr_t;
typedef long int khronos_ssize_t;
typedef long unsigned int khronos_usize_t;
typedef int khronos_int32_t;
typedef unsigned int khronos_uint32_t;
typedef long long int khronos_int64_t;
typedef long long unsigned int khronos_uint64_t;
typedef float khronos_float_t;
typedef khronos_uint64_t khronos_utime_nanoseconds_t;
typedef khronos_int64_t khronos_stime_nanoseconds_t;
typedef void GLvoid;
typedef char GLchar;
typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef khronos_int8_t GLbyte;
typedef short int GLshort;
typedef int GLint;
typedef int GLsizei;
typedef khronos_uint8_t GLubyte;
typedef short unsigned int GLushort;
typedef unsigned int GLuint;
typedef khronos_int32_t GLclampx;
typedef khronos_float_t GLfloat;
typedef khronos_float_t GLclampf;
typedef khronos_int32_t GLfixed;
typedef khronos_intptr_t GLintptr;
typedef khronos_ssize_t GLsizeiptr;
// End of typedefs.
#define MA_GL_TEX_IMAGE_2D_OK 0

#define MA_GL_TEX_IMAGE_2D_INVALID_IMAGE -2

#define MA_GL_API_GL2 0

#define MA_GL_API_GL1 1

#define MA_GL_INIT_RES_OK 0

#define MA_GL_INIT_RES_UNAVAILABLE_API -2

#define MA_GL_INIT_RES_ERROR -3

//End of defines.
/**
 * Initializes fullscreen OpenGL ES.
 * @param glApi The api you want to use.
 * \returns Any of the following result codes:
 * - #MA_GL_INIT_RES_OK If the OpenGL context was successfully initialized.
 * - #MA_GL_INIT_RES_UNAVAILABLE_API If the OpenGL api version wasn't available.
 * - #MA_GL_INIT_RES_ERROR otherwise.
 */
int maOpenGLInitFullscreen(int glApi);

/**
 * Closes full screen OpenGL ES.
 * \returns <0 on error.
 */
int maOpenGLCloseFullscreen(void);

/**
 * Works exactly as glTexImage2D but it uses an image resource instead and
 * figures out pixel formats etc.
 * @param image The handle to the image.
 * \returns Any of the following result codes:
 * - #MA_GL_TEX_IMAGE_2D_OK If the call to the function was successful.
 * - #MA_GL_TEX_IMAGE_2D_INVALID_IMAGE If the image resource handle was invalid or the image was invalid.
 */
int maOpenGLTexImage2D(MAHandle image);

/**
 * Works exactly as glTexSubImage2D but it uses an image resource instead and
 * figures out pixel formats etc.
 * @param image The handle to the image.
 * \returns Any of the following result codes:
 * - #MA_GL_TEX_IMAGE_2D_OK If the call to the function was successful.
 * - #MA_GL_TEX_IMAGE_2D_INVALID_IMAGE If the image resource handle was invalid or the image was invalid.
 */
int maOpenGLTexSubImage2D(MAHandle image);

void glActiveTexture(GLenum texture);

void glBindBuffer(GLenum target, GLuint buffer);

void glBindTexture(GLenum target, GLuint texture);

void glBlendFunc(GLenum sfactor, GLenum dfactor);

void glBufferData(GLenum target, GLsizeiptr size, const void* /* void* */ data, GLenum usage);

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void* /* void* */ data);

void glClear(GLbitfield mask);

void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);

void glClearDepthf(GLclampf depth);

void glClearStencil(GLint s);

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* /* void* */ data);

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* /* void* */ data);

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);

void glCullFace(GLenum mode);

void glDeleteBuffers(GLsizei n, const void* /* GLuint* */ buffers);

void glDeleteTextures(GLsizei n, const void* /* GLuint* */ textures);

void glDepthFunc(GLenum func);

void glDepthMask(GLboolean flag);

void glDepthRangef(GLclampf zNear, GLclampf zFar);

void glDisable(GLenum cap);

void glDrawArrays(GLenum mode, GLint first, GLsizei count);

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void* /* void* */ indices);

void glEnable(GLenum cap);

void glFinish(void);

void glFlush(void);

void glFrontFace(GLenum mode);

void glGenBuffers(GLsizei n, GLuint* buffers);

void glGenTextures(GLsizei n, GLuint* textures);

void glGetBooleanv(GLenum pname, GLboolean* params);

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params);

GLenum glGetError(void);

void glGetFloatv(GLenum pname, GLfloat* params);

void glGetIntegerv(GLenum pname, GLint* params);

MAHandle glGetStringHandle(GLenum name);

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params);

void glGetTexParameteriv(GLenum target, GLenum pname, GLint* params);

void glHint(GLenum target, GLenum mode);

GLboolean glIsBuffer(GLuint buffer);

GLboolean glIsEnabled(GLenum cap);

GLboolean glIsTexture(GLuint texture);

void glLineWidth(GLfloat width);

void glPixelStorei(GLenum pname, GLint param);

void glPolygonOffset(GLfloat factor, GLfloat units);

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* /* void* */ pixels);

void glSampleCoverage(GLclampf value, GLboolean invert);

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);

void glStencilFunc(GLenum func, GLint ref, GLuint mask);

void glStencilMask(GLuint mask);

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* /* void* */ pixels);

void glTexParameterf(GLenum target, GLenum pname, GLfloat param);

void glTexParameterfv(GLenum target, GLenum pname, const void* /* GLfloat* */ params);

void glTexParameteri(GLenum target, GLenum pname, GLint param);

void glTexParameteriv(GLenum target, GLenum pname, const void* /* GLint* */ params);

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* /* void* */ pixels);

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

// End of IOCtls.
typedef int MAWidgetHandle;
// End of typedefs.
/**
* @brief A pointer pressed event has occurred.
*/
#define MAW_EVENT_POINTER_PRESSED 2

/**
* @brief A pointer released event has occurred.
*/
#define MAW_EVENT_POINTER_RELEASED 3

/**
* @brief This event is not used and has been deprecated.
*
* @deprecated Use #MAW_EVENT_WEB_VIEW_CONTENT_LOADING.
*/
#define MAW_EVENT_CONTENT_LOADED 4

/**
* @brief Sent when something is clicked.
*/
#define MAW_EVENT_CLICKED 5

/**
* @brief Sent when an item in a list view is clicked.
*/
#define MAW_EVENT_ITEM_CLICKED 6

/**
* @brief Sent when a tab widget has changed to a new tab.
*/
#define MAW_EVENT_TAB_CHANGED 7

/**
* @brief Sent when an GLView has been initialized and is ready for setup.
*/
#define MAW_EVENT_GL_VIEW_READY 8

/**
 * @brief Sent when the URL of a web view changes
 * @deprecated Use event #MAW_EVENT_WEB_VIEW_HOOK_INVOKED.
 */
#define MAW_EVENT_WEB_VIEW_URL_CHANGED 9

/**
 * @brief Sent when a screen has been popped from a stack screen.
 */
#define MAW_EVENT_STACK_SCREEN_POPPED 10

/**
 * @brief Sent when the progress level has been changed.
 * This includes changes that were initiated by the user through a touch gesture,
         * or arrow key/trackball as well as changes that were initiated programmatically.
 */
#define MAW_EVENT_SLIDER_VALUE_CHANGED 11

/**
 * @brief Sent when the user changes\d the date in a Date Picker.
 */
#define MAW_EVENT_DATE_PICKER_VALUE_CHANGED 12

/**
 * @brief Sent when the user changes\d the time in a Time Picker.
 */
#define MAW_EVENT_TIME_PICKER_VALUE_CHANGED 13

/**
 * @brief Sent when the user changes\d the value in a Number Picker.
 */
#define MAW_EVENT_NUMBER_PICKER_VALUE_CHANGED 14

/**
 * @brief Sent from the Video View when the state of the video has changed.
 */
#define MAW_EVENT_VIDEO_STATE_CHANGED 15

/**
         * @brief Sent from the Edit box when it gains focus(the user selects the widget).
         * The virtual keyboard is shown.
         */
#define MAW_EVENT_EDIT_BOX_EDITING_DID_BEGIN 16

/**
         * @brief Sent from the Edit box when it loses focus.
         * The virtual keyboard is hidden.
         */
#define MAW_EVENT_EDIT_BOX_EDITING_DID_END 17

/**
         * @brief Sent from the Edit box when the text was changed.
         */
#define MAW_EVENT_EDIT_BOX_TEXT_CHANGED 18

/**
         * @brief Sent from the Edit box when the return button was pressed.
         * On iphone platform the virtual keyboard is not closed after receiving this event.
         * The virtual keyboard can be hided by setting the MAW_EDIT_BOX_SHOW_KEYBOARD to "false".
 * Not available on Windows Phone 7.1
         */
#define MAW_EVENT_EDIT_BOX_RETURN 19

/**
* @brief A WebView widget reports status of loading
* page content. Event parameter status is set to one
* of the following values:
*   #MAW_CONSTANT_STARTED
*   #MAW_CONSTANT_DONE
*   #MAW_CONSTANT_STOPPED
*   #MAW_CONSTANT_ERROR
*/
#define MAW_EVENT_WEB_VIEW_CONTENT_LOADING 20

/**
* @brief A web view hook has captured a url.
*
* The event parameter hookType is set to
* the type of hook, one of:
*   #MAW_CONSTANT_SOFT
*   #MAW_CONSTANT_HARD
*
* Event parameter urlData is a handle to the url that
* has been captured.
*
* Use syscall maGetDataSize to get the size of the url data
* and maReadData to access the data.
*
* NOTE: When you get this message you have ownership
* of the url data handle and you have the responsibility to
* deallocate it using maDestroyPlaceholder.
*
* To get this event, you need to register a hook pattern, using
* maWidgetSetProperty with the properties #MAW_WEB_VIEW_SOFT_HOOK
* and/or #MAW_WEB_VIEW_HARD_HOOK.
*/
#define MAW_EVENT_WEB_VIEW_HOOK_INVOKED 21

/**
* Send by a Dialog widget when when a user dismisses a popover by tapping outside of it.
* It will not be sent if it was dismissed by calling #maWidgetModalDialogHide().
* Available only on the iPad.
*/
#define MAW_EVENT_DIALOG_DISMISSED 22

/**
* Send by current screen just before it begins rotating.
* Platform: iOS and Windows Phone 7.1
*/
#define MAW_EVENT_SCREEN_ORIENTATION_WILL_CHANGE 23

/**
* Send by current screen after it finishes rotating.
* Platform: iOS and Windows Phone 7.1
*/
#define MAW_EVENT_SCREEN_ORIENTATION_DID_CHANGE 24

/**
* @brief Send when the value in a Rating Bar.
*/
#define MAW_EVENT_RATING_BAR_VALUE_CHANGED 25

/**
* @brief Send when one of the radio buttons in a radio group is selected.
*/
#define MAW_EVENT_RADIO_GROUP_ITEM_SELECTED 26

/**
* @brief Send when  the radio button state is changed.
*/
#define MAW_EVENT_RADIO_BUTTON_STATE_CHANGED 27

/**
* @brief Send when the Options Menu is being closed (either by the user canceling
* the menu with the back/menu button, or when an item is selected).
*/
#define MAW_EVENT_OPTIONS_MENU_CLOSED 28

/**
* @brief Send when an item in your options menu is selected.
*/
#define MAW_EVENT_OPTIONS_MENU_ITEM_SELECTED 29

/**
* @brief Sent when the zoom level of a map widget has changed (if the user zoomed in or out).
*/
#define MAW_EVENT_MAP_ZOOM_LEVEL_CHANGED 30

/**
* @brief Sent when the visible region on the map has changed (if the user scrolled/draged the map).
*/
#define MAW_EVENT_MAP_REGION_CHANGED 31

/**
 * @brief Sent when a map pin is clicked by the user.
 */
#define MAW_EVENT_MAP_PIN_CLICKED 32

/**
* @brief A handle to the MoSync canvas screen. Use maWidgetScreenShow with this handle to show the initial mosync canvas.
*/
#define MAW_CONSTANT_MOSYNC_SCREEN_HANDLE 0

/**
* @brief If set to the width or height of a widget and the parent is either a vertical or horizontal layout it tries to fill the available space in that dimension. If there are multiple widgets specified with this constant, the space will then be shared equally. If the parent isn't a horizontal or vertical layout it just resizes the child to the size of its parent.
*/
#define MAW_CONSTANT_FILL_AVAILABLE_SPACE -1

/**
* @brief If set to the width or height of a widget it will be as big as its content in that dimension.
*/
#define MAW_CONSTANT_WRAP_CONTENT -2

/**
* @brief Loading a page has started. Used in
* #MAW_EVENT_WEB_VIEW_CONTENT_LOADED.
*/
#define MAW_CONSTANT_STARTED 1

/**
* @brief Loading a page is done. Used in
* #MAW_EVENT_WEB_VIEW_CONTENT_LOADED.
*/
#define MAW_CONSTANT_DONE 2

/**
* @brief Loading a page has stopped (aborted). Used in
* #MAW_EVENT_WEB_VIEW_CONTENT_LOADED.
*/
#define MAW_CONSTANT_STOPPED 3

/**
* @brief Loading a page has failed. Used in
* #MAW_EVENT_WEB_VIEW_CONTENT_LOADED.
*/
#define MAW_CONSTANT_ERROR -1

/**
* @brief The hook type is a soft hook. Used in
* #MAW_EVENT_WEB_VIEW_HOOK_INVOKED.
*/
#define MAW_CONSTANT_SOFT 5

/**
* @brief The hook type is a hard hook. Used in
* #MAW_EVENT_WEB_VIEW_HOOK_INVOKED.
*/
#define MAW_CONSTANT_HARD 6

/**
* @brief The hook type is a message sendt from JavaScript.
* Used in #MAW_EVENT_WEB_VIEW_HOOK_INVOKED.
* This type of hook does not use any hook pattern, it is
* always sent from the browser, using a platform specific
* method (which is abstracted away in the libraries).
*/
#define MAW_CONSTANT_MESSAGE 7

/**
* @brief The popover arrow should point up. Used in
* #MAW_MODAL_DIALOG_ARROW_POSITION.
*/
#define MAW_CONSTANT_ARROW_UP 1

/**
* @brief The popover arrow should point down. Used in
* #MAW_MODAL_DIALOG_ARROW_POSITION.
*/
#define MAW_CONSTANT_ARROW_DOWN 2

/**
* @brief The popover arrow should point left. Used in
* #MAW_MODAL_DIALOG_ARROW_POSITION.
*/
#define MAW_CONSTANT_ARROW_LEFT 4

/**
* @brief The popover arrow should point right. Used in
* #MAW_MODAL_DIALOG_ARROW_POSITION.
*/
#define MAW_CONSTANT_ARROW_RIGHT 8

/**
* @brief The popover arrow can point anywhere. Used in
* #MAW_MODAL_DIALOG_ARROW_POSITION.
*/
#define MAW_CONSTANT_ARROW_ANY 15

/**
* @brief Constant that represents a left aligned widget.
*/
#define MAW_ALIGNMENT_LEFT "left"

/**
* @brief Constant that represents a right aligned widget.
*/
#define MAW_ALIGNMENT_RIGHT "right"

/**
* @brief Constant that represents a center aligned widget.
*/
#define MAW_ALIGNMENT_CENTER "center"

/**
* @brief Constant that represents a top aligned widget.
*/
#define MAW_ALIGNMENT_TOP "top"

/**
* @brief Constant that represents a bottom aligned widget.
*/
#define MAW_ALIGNMENT_BOTTOM "bottom"

/**
* @brief Play the video.
*/
#define MAW_VIDEO_VIEW_ACTION_PLAY 1

/**
* @brief Pause the video.
*/
#define MAW_VIDEO_VIEW_ACTION_PAUSE 2

/**
* @brief Stop the video.
*/
#define MAW_VIDEO_VIEW_ACTION_STOP 3

/**
* @brief The video is playing.
*/
#define MAW_VIDEO_VIEW_STATE_PLAYING 1

/**
* @brief The video is paused.
*/
#define MAW_VIDEO_VIEW_STATE_PAUSED 2

/**
* @brief The video is stopped.
*/
#define MAW_VIDEO_VIEW_STATE_STOPPED 3

/**
* @brief The video has finished playing.
*/
#define MAW_VIDEO_VIEW_STATE_FINISHED 4

/**
* @brief The source is ready to be played.
* NOTE: On Android this event is received after loading url/path.
*       On iOS this event is received after PLAYING event is received.
*	On WindowsPhone this event is received after media loding has finished
*/
#define MAW_VIDEO_VIEW_STATE_SOURCE_READY 5

/**
* @brief Playback is temporarily interruped(maybe there's no data in the buffer).
* NOTE: On WindowsPhone 7 this occurs when an error is encountered.
*/
#define MAW_VIDEO_VIEW_STATE_INTERRUPTED 6

/**
* @brief Indicates that the call to a widget syscall was successful.
*/
#define MAW_RES_OK 0

/**
* @brief Indicates that the call to a widget syscall was unsuccessful.
*/
#define MAW_RES_ERROR -2

/**
* @brief Indicates that the call to maWidgetSetProperty or maWidgetGetProperty received an invalid property name.
*/
#define MAW_RES_INVALID_PROPERTY_NAME -2

/**
* @brief Indicates that the call to maWidgetSetProperty or maWidgetGetProperty received an invalid property value.
*/
#define MAW_RES_INVALID_PROPERTY_VALUE -3

/**
* @brief Indicates that the call to a widget function received an invalid handle.
*/
#define MAW_RES_INVALID_HANDLE -4

/**
* @brief Indicates that the call maWidgetCreate received an invalid type name.
*/
#define MAW_RES_INVALID_TYPE_NAME -5

/**
* @brief Indicates that the call to maWidgetInsertChild received an invalid index.
*/
#define MAW_RES_INVALID_INDEX -6

/**
* @brief Indicates that the call maWidgetGetProperty needs a larger buffer.
*/
#define MAW_RES_INVALID_STRING_BUFFER_SIZE -7

/**
* @brief Indicates that maWidgetScreenShow received an invalid (non-screen) widget handle.
*/
#define MAW_RES_INVALID_SCREEN -8

/**
* @brief Indicates that the caller tried to add a widget to a non-layout.
*/
#define MAW_RES_INVALID_LAYOUT -9

/**
* @brief Indicates that the caller tried to remove a visible root widget (screen) and the MoSync view will become visible.
*/
#define MAW_RES_REMOVED_ROOT -10

/**
* @brief Indicates that a syscall tried to access a feature that is not supported by the current framework version.
*/
#define MAW_RES_FEATURE_NOT_AVAILABLE -11

/**
* @brief Indicates that a syscall tried to add a dialog to a parent, which cannot be done because dialogs are in fact
* containers for other widgets.
*/
#define MAW_RES_CANNOT_INSERT_DIALOG -12

/**
* @brief A screen is the root of all widgets currently visible on a screen. See \ref WidgetScreenProperties "Screen properties" for the properties available.
*/
#define MAW_SCREEN "Screen"

/**
* @brief A tab screen is a special type of screen that can have any number of sub-screens each switchable using a tab bar. See \ref WidgetTabScreenProperties "Tab screen properties" for the properties available.
*/
#define MAW_TAB_SCREEN "TabScreen"

/**
* @brief A stack screen is a special type of screen that manages navigation
* between a set of screens.
*
* The screen stack can be pushed or popped. Pushing a given screen will hide
* the current screen and display the pushed screen. Popping a screen hides
* the current screen and shows the previous screen in the stack. See
* maWidgetStackScreenPush() and maWidgetStackScreenPop().
*
* Navigation between the screens in the stack is handled according to the
* norm on the specific platform. On iPhone a navigation bar is added to each
* pushed screen that can be used to go back, while on Android there is no
* extra UI added and the back button is used to go back to the previous screen.
* See \ref WidgetStackScreenProperties "Stack screen properties" for the
* properties available.
*/
#define MAW_STACK_SCREEN "StackScreen"

/**
* @brief A button is a widget that represent a physical button that can be pressed. See \ref WidgetButtonProperties "Button properties" for the properties available.
*/
#define MAW_BUTTON "Button"

/**
* @brief An image is a widget that can be used to display an image. See \ref WidgetImageProperties "Image properties" for the properties available.
*/
#define MAW_IMAGE "Image"

/**
* @brief An image button is a button that will also affect the appearance of the background image when pressed. See \ref WidgetImageButtonProperties "Image button properties" for the properties available.
*/
#define MAW_IMAGE_BUTTON "ImageButton"

/**
* @brief A label is a widget that can be used to display static non-editable text. See \ref WidgetLabelProperties "Label properties" for the properties available.
*/
#define MAW_LABEL "Label"

/**
* @brief An editbox is an editable label. See \ref WidgetEditBoxProperties "Editbox properties" for the properties available.
*/
#define MAW_EDIT_BOX "EditBox"

/**
* @brief A list view is a vertical list of widgets that is also scrollable. See \ref WidgetListViewProperties "List view properties" for the properties available.
*/
#define MAW_LIST_VIEW "ListView"

/**
* @brief A list view item is a special kind of layout compatible with the list view. That has a predefined common layout for adding text, an icon etc. See \ref WidgetListViewItemProperties "List view item properties" for the properties available.
*/
#define MAW_LIST_VIEW_ITEM "ListViewItem"

/**
 * @brief A check box is a widget that acts like a physical switch. When pressed it will toggle its internal state that can either be checked or non-checked. See \ref WidgetCheckBoxProperties "Check box properties" for the properties available.
 * If you want to display it with a "light" indicator, as it is on iOS use a Toggle Button instead.

 */
#define MAW_CHECK_BOX "CheckBox"

/**
 * @brief A horizontal layout is a layout that stacks widgets in the horizontal axis. See \ref WidgetHorizontalLayoutProperties "Horizontal layout properties" for the properties available.
 */
#define MAW_HORIZONTAL_LAYOUT "HorizontalLayout"

/**
 * @brief A vertical layout is a layout that stacks widgets in the vertical axis. See \ref WidgetVerticalLayoutProperties "Vertical layout properties" for the properties available.
 */
#define MAW_VERTICAL_LAYOUT "VerticalLayout"

/**
 * @brief A relative layout is a layout that layouts widgets relative to its coordinate system. See \ref WidgetRelativeLayoutProperties "Relative layout properties" for the properties available.
 */
#define MAW_RELATIVE_LAYOUT "RelativeLayout"

/**
 * @brief A search bar is a special kind of edit box that is used for searching. See \ref WidgetSearchBarProperties "Search bar properties" for the properties available.
 */
#define MAW_SEARCH_BAR "SearchBar"

/**
 * @brief A nav bar is an iphone specific widget that shows a nav bar with an optional title and back button. See \ref WidgetNavBarProperties "Nav bar properties" for the properties available.
 * See \ref WidgetNavBarProperties "Navigation Bar properties" for the properties available.
 */
#define MAW_NAV_BAR "NavBar"

/**
 * @brief A GL view is a widget that is used to display graphics rendered by the GPU using OpenGL|ES 1.0/1.1 calls. See \ref WidgetGLViewProperties "GL view properties" for the properties available.
 */
#define MAW_GL_VIEW "GLView"

/**
 * @brief A GL view is a widget that is used to display graphics rendered by the GPU using OpenGL|ES 2.0 calls. See \ref WidgetGLViewProperties "GL view properties" for the properties available.
 */
#define MAW_GL2_VIEW "GL2View"

/**
 * @brief A Camera preview widget is a widget that can bound to a camera and contain the live veiw data from the camera.
 */
#define MAW_CAMERA_PREVIEW "CameraPreview"

/**
 * @brief A web view is a widget used to render web pages. See \ref WidgetWebViewProperties "Web view properties" for the properties available.
 */
#define MAW_WEB_VIEW "WebView"

/**
 * @brief A progress bar is a visual indicator of progress in some operation.
 * Displays a bar to the user representing how far the operation has progressed.
 * A progress bar can also be made indeterminate, when the length of the task is unknown.
 *
 * See \ref WidgetProgressBarProperties "Progress bar properties" for the properties available.
 */
#define MAW_PROGRESS_BAR "ProgressBar"

/**
 * @brief An activity indicator is a visual indicator of progress in some operation.
 * It shows a cyclic animation without an indication of progress.
 * It is used when the length of the task is unknown.
 *
 * See \ref WidgetActivityIndicatorProperties "Activity Indicator properties" for the properties available.
 */
#define MAW_ACTIVITY_INDICATOR "ActivityIndicator"

/**
 * @brief A Slider is an extension of ProgressBar that adds a draggable thumb.
 * The user can touch the thumb and drag left or right to set the current progress level.
 *
 * See \ref WidgetSliderProperties "Slider properties" for the properties available.
 */
#define MAW_SLIDER "Slider"

/**
 * @brief A Date Picker is a widget for selecting a date. The date can be selected by a year, month, and day spinners.
 * The minimal and maximal date from which dates to be selected can be customized.
 * The picker is initialized with the current system date.
 *
 * See \ref WidgetDatePickerProperties "Date Picker properties" for the properties available.
 */
#define MAW_DATE_PICKER "DatePicker"

/**
 * @brief A Time Picker is a widget for selecting time of day, in 24 hour mode.
 * The hour and each minute digit can be controlled by vertical spinners.
 * The hour can be entered by keyboard input.
 * Availabe only on iOS for the moment.
 * See \ref WidgetTimePickerProperties "Time Picker properties" for the properties available.
 */
#define MAW_TIME_PICKER "TimePicker"

/**
 * @brief A Number Picker is a widget that enables the user to select a number from a predefined range.
 * Note: for the moment it is available only on iOS.
 * See \ref WidgetNumberPickerProperties "Number Picker properties" for the properties available.
 */
#define MAW_NUMBER_PICKER "NumberPicker"

/**
 * @brief A Video View displays a video file.
 * By default, it has attached a controller view that typically contains the buttons like
 * "Play/Pause", "Rewind", "Fast Forward" and a progress slider.
 * See \ref WidgetVideoViewProperties "Video View properties" for the properties available.
 */
#define MAW_VIDEO_VIEW "VideoView"

/**
 * @brief A Toggle Button is a widget that acts like a physical switch. Displays checked/unchecked states as a button with a "light" indicator and by default accompanied with the text "ON" or "OFF".
 * It is available only on Android, and it's similar to the Check Box on iOS.
 * When pressed it will toggle its internal state that can either be checked or non-checked. See \ref WidgetToggleButtonProperties "Toggle button properties" for the properties available.
 */
#define MAW_TOGGLE_BUTTON "ToggleButton"

/**
* @brief A dialog is a sort of modal view, that can look different depending on the platform.
* A Dialog gets visible only after calling maWidgetModalDialogShow().
* On Android it is a modal alert dialog.
* On iPad it is a PopoverController, and on iPhone it is a modal view.
* On Windows Phone, it's a Popup having inside a StackPanel which contains all the controls added to the dialog view.
* When a Dialog widget is created it is empty, it has no content. Any type of widget can be added inside it via #maWidgetAddChild syscalls.
* To show a Dialog call #maWidgetModalDialogShow(), to dismiss it call: #maWidgetModalDialogHide(), and to delete it call #maWidgetDestroy.
* See \ref WidgetModalDialogProperties "Modal Dialog properties" for the properties available.
*/
#define MAW_MODAL_DIALOG "ModalDialog"

/**
* @brief A panorama control is a Windows Phone 7 specific control. The paroramaView is a screen container
*	 which may contain more then one screen. A screen can spann over the hardware screen width.
*	 In order to enable this you will have to set the width property of a screen to a certain value.
*	 For more information regarding this control please check the following link:
*	 http://msdn.microsoft.com/en-us/library/ff941104(v=vs.92).aspx
*
* Available only on Windows Phone 7
* See \ref WidgetPanoramaViewProperties "Panorama View properties" for the properties available
*/
#define MAW_PANORAMA_VIEW "PanoramaView"

/**
* @brief A radio button available only on Android. A radio button can only have a \ref MAW_RADIO_GROUP parent.
* Checking one radio button that belongs to a radio group unchecks any previously checked radio button within the same group.
* Initially, all of the radio buttons are unchecked.
* While it is not possible to uncheck a particular radio button, the radio group can be cleared to remove the checked state.
* See \ref WidgetRadioButtonProperties "Radio Button properties" for the properties available.
*/
#define MAW_RADIO_BUTTON "RadioButton"

/**
* \brief A radio group is available only on Android.
* This class is used to create a multiple-exclusion scope for a set of the \link #MAW_RADIO_BUTTON RADIO_BUTTONS \endlink .
* See \ref WidgetRadioGroupProperties "Radio Group properties" for the properties available.
*/
#define MAW_RADIO_GROUP "RadioGroup"

/**
* @brief A RatingBar is an extension of Slider and ProgressBar that shows a rating in stars.
* The user can touch/drag or use arrow keys to set the rating when using the default size RatingBar.
* When using a RatingBar that supports user interaction, placing widgets to the left or right of the
* RatingBar is discouraged.
* See \ref WidgetRatingBarProperties "Rating Bar properties" for the properties available.
*/
#define MAW_RATING_BAR "RatingBar"

/**
* @brief The map widget will contain the google map (on iOS and Android) and the bing map (on Windows Phone)
* controls and will allow the user to interract with the map.
* See \ref WidgetMapProperties "Map properties" for the properties available.
*/
#define MAW_MAP "Map"

/**
 * @brief A map pin can pe placend on the map at a given set of coordinates and responds to click events.
 * See \ref WidgetMapPinProperties "Map pin properties" for the properties available.
 */
#define MAW_MAP_PIN "MapPin"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_ADD "17301555"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_AGENDA "17301556"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_ALWAYS_LANDSCAPE_PORTRAIT "17301557"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_CALL "17301558"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_CAMERA "17301559"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_CLOSE_CLEAR_CANCEL "17301560"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_COMPASS "17301561"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_CROP "17301562"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_DAY "17301563"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_DELETE "17301564"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_DIRECTIONS "17301565"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_EDIT "17301566"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_GALLERY "17301567"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_HELP "17301568"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_INFO_DETAILS "17301569"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_MANAGE "17301570"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_MAPMODE "17301571"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_MONTH "17301572"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_MORE "17301573"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_MY_CALENDAR "17301574"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_MYLOCATION "17301575"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_MYPLACES "17301576"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_PREFERENCES "17301577"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_RECENT_HISTORY "17301578"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_REPORT_IMAGE "17301579"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_REVERT "17301580"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_ROTATE "17301581"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_SAVE "17301582"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_SEARCH "17301583"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_SEND "17301584"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_SET_AS "17301585"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_SHARE "17301586"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_SLIDESHOW "17301587"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_SORT_ALPHABETICALLY "17301660"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_SORT_BY_SIZE "17301661"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_TODAY "17301588"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_UPLOAD "17301589"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_UPLOAD_YOU_TUBE "17301590"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_VIEW "17301591"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_WEEK "17301592"

#define MAW_OPTIONS_MENU_ICON_CONSTANT_ZOOM "17301593"

/**
* The available widget properties for all widgets.
*/
/**
* @brief Sets or gets the horizontal distance from the parent widget in a RelativeLayout.
*
* @validvalue A positive integer in number of pixels.
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_LEFT, "100");
* \endcode
*/
#define MAW_WIDGET_LEFT "left"

/**
* @brief Specifies the vertical distance from the parent widget in a RelativeLayout.
*
* @validvalue A positive integer in number of pixels.
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_TOP, "100");
* \endcode
*/
#define MAW_WIDGET_TOP "top"

/**
* @brief Sets or gets the width of a widget.
*
* @validvalue A positive integer in pixles, or any of the constants #MAW_CONSTANT_FILL_AVAILABLE_SPACE, #MAW_CONSTANT_WRAP_CONTENT.
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_WIDTH, "100");
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_WIDTH, MAW_CONSTANT_FILL_AVAILABLE_SPACE);
* \endcode
*/
#define MAW_WIDGET_WIDTH "width"

/**
* @brief Sets or gets the height of a widget.
*
* @validvalue A positive integer in pixles, or any of the constants #MAW_CONSTANT_FILL_AVAILABLE_SPACE, #MAW_CONSTANT_WRAP_CONTENT.
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_HEIGHT, "100");
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_HEIGHT, MAW_CONSTANT_FILL_AVAILABLE_SPACE);
* \endcode
*/
#define MAW_WIDGET_HEIGHT "height"

/**
* @brief Sets the transparency of the widget background.
* On Android this property is available for the moment only on Layouts and ImageWidget widgets.
*
* @validvalue A float between 0.0 and 1.0, where 0.0 is fully transparent and 1.0 is opaque.
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_ALPHA, "0.0"); // Not visible
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_ALPHA, "0.5"); // Half visible
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_ALPHA, "1.0"); // Fully visible
* \endcode
*/
#define MAW_WIDGET_ALPHA "alpha"

/**
* @brief Specifies the background color of a widget.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_BACKGROUND_COLOR, "0xff0000"); // Red
* \endcode
*/
#define MAW_WIDGET_BACKGROUND_COLOR "backgroundColor"

/**
* @brief Sets whether the widget is visible or not. Layouts ignore invisible widgets.
*
* @validvalue A boolean string 'true' or 'false', where true is visible and false is invisible.
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_VISIBLE, "false");
* \endcode
*/
#define MAW_WIDGET_VISIBLE "visible"

/**
* @brief Sets whether the widget is enabled or not. If not, the widget is grayed out.
*
* Widgets are enabled by default.
*
* @validvalue A boolean string 'true' or 'false', where true is enabled and false is disabled.
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(buttonHandle, MAW_WIDGET_ENABLED, "false");
* \endcode
*/
#define MAW_WIDGET_ENABLED "enabled"

/**
* @brief Specifies the background gradient of a widget.
* Currently implemented only on Android.
*
* @validvalue Two hexadecimal values 0xRRGGBB, where R, G and B are the red, green and blue components respectively,
* separated by comma.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(widgetHandle, MAW_WIDGET_BACKGROUND_GRADIENT,  "0x27408B,0xCAE1FF");
* \endcode
*/
#define MAW_WIDGET_BACKGROUND_GRADIENT "backgroundGradient"

/**
* @brief Sets the title of a screen. The screen title is used by tab screen to display a text on the tab indicator.
*
* @validvalue Null terminated string. The length of the string should be short enough to fit in a tab indicator.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(screenHandle, MAW_SCREEN_TITLE, "My title");
* \endcode
*/
#define MAW_SCREEN_TITLE "title"

/**
* @brief Sets an icon for a screen. The icon is used by a tab screen to display an icon on the tab indicator.
*
* @validvalue MoSync handle to an uncompressed image resource. The size of the image should be small enough to fit in a tab indicator.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(screenHandle, MAW_SCREEN_ICON, toString(R_MY_ICON));
* \endcode
*/
#define MAW_SCREEN_ICON "icon"

/**
* @brief Remove the options menu from this screen.
* The options menu can be added by calling \ref maWidgetScreenAddOptionsMenuItem for each item.
*
* @validvalue No value needed.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(screenHandle, MAW_SCREEN_REMOVE_OPTIONS_MENU, "");
* \endcode
*/
#define MAW_SCREEN_REMOVE_OPTIONS_MENU "removeoptionsmenu"

/**
* @copydoc MAW_SCREEN_TITLE
*/
#define MAW_TAB_SCREEN_TITLE "title"

/**
* @copydoc MAW_SCREEN_ICON
*/
#define MAW_TAB_SCREEN_ICON "icon"

/**
* @brief Sets or gets the currently open tab to the tab with the given index.
*
* @validvalue A 0-indexed tab number.
*
* @setandget
*
* @par Example set
* \code
*	maWidgetSetProperty(tabScreenHandle, MAW_TAB_SCREEN_CURRENT_TAB, "1");
* \endcode
*
* @par Example get
* \code
* char currentTabBuffer[BUFFER_SIZE];
* int result = maWidgetGetProperty(
* tabScreenHandle,
* MAW_WEB_VIEW_CURRENT_TAB,
* currentTabBuffer,
*	BUFFER_SIZE);
* if (result > 0)
* {
*     // Do something with current tab.
* }
* \endcode
*/
#define MAW_TAB_SCREEN_CURRENT_TAB "currentTab"

/**
* @copydoc #MAW_SCREEN_TITLE
*/
#define MAW_PANORAMA_VIEW_TITLE "title"

/**
* @brief Sets or gets the currently shown screen to the screen with the given index.
*
* @validvalue A 0-indexed tab number.
*
* @setandget
*
* @par Example set
* \code
*	maWidgetSetProperty(panoramaViewHandle, MAW_PANORAMA_VIEW_CURRENT_SCREEN, "1");
* \endcode
*
* @par Example get
* \code
* char currentScreenBuffer[BUFFER_SIZE];
* int result = maWidgetGetProperty(
* panoramaViewHandle,
* MAW_PANORAMA_VIEW_CURRENT_SCREEN,
* currentScreenBuffer,
*	BUFFER_SIZE);
* if (result > 0)
* {
*     // Do something with current screen.
* }
* \endcode
*/
#define MAW_PANORAMA_VIEW_CURRENT_SCREEN "currentScreen"

/**
 * @brief Sets the background image of the view
 *
 * @validvalue MoSync handle to an uncompressed image resource. The size of the image should be large enough to fill the space used by the panorama
 *
 * @setonly
 *
 * @par Example
 * \code
 *	maWidgetSetProperty(panoramaViewHandle, MAW_PANORAMA_VIEW_BACKGROUND_IMAGE, toString(R_MY_IMG));
 * \endcode
 */
#define MAW_PANORAMA_VIEW_BACKGROUND_IMAGE "backgroundImage"

/**
* @copydoc #MAW_SCREEN_TITLE
*/
#define MAW_STACK_SCREEN_TITLE "title"

/**
* @copydoc #MAW_SCREEN_ICON
*/
#define MAW_STACK_SCREEN_ICON "icon"

/**
* @brief Specifies whether the back button automatically should pop the stack screen.
*
* This can have different behaviors on different platforms, on iPhone the UI back button is disabled, on Android the stack screen ignores back button events.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(stackScreenHandle, MAW_STACK_SCREEN_BACK_BUTTON_ENABLED, "false");
* \endcode
*/
#define MAW_STACK_SCREEN_BACK_BUTTON_ENABLED "backButtonEnabled"

/**
* @brief Sets or gets the text that is displayed in the label.
*
* @validvalue A null-terminated string.
*
* @setandget
*
* @par Example set
* \code
*	maWidgetSetProperty(labelHandle, MAW_LABEL_TEXT, "My label");
* \endcode
*
* @par Example get
* \code
* char textBuffer[BUFFER_SIZE];
* int result = maWidgetGetProperty(labelHandle, MAW_LABEL_TEXT, textBuffer, BUFFER_SIZE);
* if (result > 0)
* {
*     // Do something with the label text.
* }
* \endcode
*/
#define MAW_LABEL_TEXT "text"

/**
* @brief Sets the vertical alignment of the text inside the label. If the widget's height is WRAP_CONTENT this property has no effect.
*
* @validvalue One of the constants #MAW_ALIGNMENT_TOP, #MAW_ALIGNMENT_CENTER or #MAW_ALIGNMENT_BOTTOM.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(labelHandle, MAW_LABEL_TEXT_VERTICAL_ALIGNMENT, MAW_ALIGNMENT_CENTER);
* \endcode
*/
#define MAW_LABEL_TEXT_VERTICAL_ALIGNMENT "textVerticalAlignment"

/**
* @brief Sets the horizontal alignment of the text inside the label. If the widget's height is WRAP_CONTENT this property has no effect.
*
* @validvalue Takes one of the constants #MAW_ALIGNMENT_TOP, #MAW_ALIGNMENT_CENTER or #MAW_ALIGNMENT_BOTTOM.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(labelHandle, MAW_LABEL_TEXT_HORIZONTAL_ALIGNMENT, MAW_ALIGNMENT_CENTER);
* \endcode
*/
#define MAW_LABEL_TEXT_HORIZONTAL_ALIGNMENT "textHorizontalAlignment"

/**
* @brief Sets the font color of the label's text.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(labelHandle, MAW_LABEL_FONT_COLOR, "0xff0000");
* \endcode
*/
#define MAW_LABEL_FONT_COLOR "fontColor"

/**
* @brief Sets the font size in points of the label's text.
*
* @validvalue A float that specifies the number of pixels on Android
* and WP7, and number of points on iOS.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(labelHandle, MAW_LABEL_FONT_SIZE, "13.0");
* \endcode
*/
#define MAW_LABEL_FONT_SIZE "fontSize"

/**
* @brief Sets the typeface and style in which the text should be displayed.
*
* @validvalue A font handle received from loading fonts using
* #maFontGetName and #maFontLoadWithName syscalls.
*
* @setonly
*
* @par Example
* \code
*   int nrFonts = maFontGetCount();
*    char buf[256];
*    // Get first font name.
*    maFontGetName(1, buf, 256);
*    // Load that font for size 10.
*    int fontHandle = maFontLoadWithName(buf, 10);
*    // Set that font to the label.
*	maWidgetSetProperty(labelHandle, MAW_LABEL_FONT_HANDLE, toString(fontHandle));
* \endcode
*/
#define MAW_LABEL_FONT_HANDLE "fontHandle"

/**
* @brief Sets the maximum number of lines used for rendering text.
* To remove any maximum limit, and use as many lines as needed, set the value of this property to 0.
*
* @validvalue An integer that specifies the maximum number of lines.
*
* @setandget.
*
* @par Example
* \code
*	maWidgetSetProperty(labelHandle, MAW_LABEL_MAX_NUMBER_OF_LINES, "3");
* \endcode
*/
#define MAW_LABEL_MAX_NUMBER_OF_LINES "maxNumberOfLines"

/**
* @brief Sets or gets the text that is displayed in the label.
*
* @validvalue A null-terminated string.
*
* @setandget
*
* @par Example set
* \code
*	maWidgetSetProperty(buttonHandle, MAW_BUTTON_TEXT, "My button");
* \endcode
*
* @par Example get
* \code
* char textBuffer[BUFFER_SIZE];
* int result = maWidgetGetProperty(buttonHandle, MAW_BUTTON_TEXT, textBuffer, BUFFER_SIZE);
* if (result > 0)
* {
*     // Do something with the label text.
* }
* \endcode
*/
#define MAW_BUTTON_TEXT "text"

/**
* @brief Sets the vertical alignment of the text inside the button. If the widget's height is WRAP_CONTENT this property has no effect.
*
* @validvalue One of the constants #MAW_ALIGNMENT_TOP, #MAW_ALIGNMENT_CENTER or #MAW_ALIGNMENT_BOTTOM.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(buttonHandle, MAW_BUTTON_TEXT_VERTICAL_ALIGNMENT, MAW_ALIGNMENT_CENTER);
* \endcode
*/
#define MAW_BUTTON_TEXT_VERTICAL_ALIGNMENT "textVerticalAlignment"

/**
* @brief Sets the horizontal alignment of the text inside the button. If the widget's width is WRAP_CONTENT this property has no effect.
*
* @validvalue Takes one of the constants #MAW_ALIGNMENT_LEFT, #MAW_ALIGNMENT_CENTER or #MAW_ALIGNMENT_RIGHT.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(buttonHandle, MAW_BUTTON_TEXT_HORIZONTAL_ALIGNMENT, MAW_ALIGNMENT_CENTER);
* \endcode
*/
#define MAW_BUTTON_TEXT_HORIZONTAL_ALIGNMENT "textHorizontalAlignment"

/**
* @brief Sets the font color of the button's text.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(buttonHandle, MAW_BUTTON_FONT_COLOR, "0xff0000");
* \endcode
*/
#define MAW_BUTTON_FONT_COLOR "fontColor"

/**
* @brief Sets the font size in points of the button's text.
*
* @validvalue A float that specifies the number of pixels on Android
* and WP7, and number of points on iOS.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(buttonHandle, MAW_BUTTON_FONT_SIZE, "13.0");
* \endcode
*/
#define MAW_BUTTON_FONT_SIZE "fontSize"

/**
* @brief Sets the typeface and style in which the text should be displayed.
*
* @validvalue A font handle received from loading fonts using
* #maFontGetName and #maFontLoadWithName syscalls.
*
* @setonly
*
* @par Example
* \code
*   int nrFonts = maFontGetCount();
*    char buf[256];
*    // Get first font name.
*    maFontGetName(1, buf, 256);
*    // Load that font for size 10.
*    int fontHandle = maFontLoadWithName(buf, 10);
*    // Set that font to the label.
*	maWidgetSetProperty(buttonHandle, MAW_BUTTON_FONT_HANDLE, toString(fontHandle));
* \endcode
*/
#define MAW_BUTTON_FONT_HANDLE "fontHandle"

/**
* @brief Sets or gets the text that is displayed in the label.
* Note: It is not available on Android, as native image buttons do not have text attached.
* @validvalue A null-terminated string.
*
* @setandget
*
* @par Example set
* \code
*	maWidgetSetProperty(imageButtonHandle, MAW_IMAGE_BUTTON_TEXT, "My button");
* \endcode
*
* @par Example get
* \code
* char textBuffer[BUFFER_SIZE];
* int result = maWidgetGetProperty(imageButtonHandle, MAW_IMAGE_BUTTON_TEXT, textBuffer, BUFFER_SIZE);
* if (result > 0)
* {
*     // Do something with the label text.
* }
* \endcode
*/
#define MAW_IMAGE_BUTTON_TEXT "text"

/**
* @brief Sets the vertical alignment of the text inside the button. If the widget's height is WRAP_CONTENT this property has no effect.
*
* @validvalue One of the constants #MAW_ALIGNMENT_TOP, #MAW_ALIGNMENT_CENTER or #MAW_ALIGNMENT_BOTTOM.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(imageButtonHandle, MAW_IMAGE_BUTTON_TEXT_VERTICAL_ALIGNMENT, MAW_ALIGNMENT_CENTER);
* \endcode
*/
#define MAW_IMAGE_BUTTON_TEXT_VERTICAL_ALIGNMENT "textVerticalAlignment"

/**
* @brief Sets the horizontal alignment of the text inside the button. If the widget's height is WRAP_CONTENT this property has no effect.
*
* @validvalue Takes one of the constants #MAW_ALIGNMENT_TOP, #MAW_ALIGNMENT_CENTER or #MAW_ALIGNMENT_BOTTOM.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(imageButtonHandle, MAW_IMAGE_BUTTON_TEXT_HORIZONTAL_ALIGNMENT, MAW_ALIGNMENT_CENTER);
* \endcode
*/
#define MAW_IMAGE_BUTTON_TEXT_HORIZONTAL_ALIGNMENT "textHorizontalAlignment"

/**
* @brief Sets the font color of the button's text.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(imageButtonHandle, MAW_IMAGE_BUTTON_FONT_COLOR, "0xff0000");
* \endcode
*/
#define MAW_IMAGE_BUTTON_FONT_COLOR "fontColor"

/**
* @brief Sets the font size in points of the button's text.
*
* @validvalue A float that specifies the number of pixels on Android
* and WP7, and number of points on iOS.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(imageButtonHandle, MAW_IMAGE_BUTTON_FONT_SIZE, "13.0");
* \endcode
*/
#define MAW_IMAGE_BUTTON_FONT_SIZE "fontSize"

/**
* Sets the background image. This will be scaled to fit the whole widget (not keeping the aspect).
*
* @validvalue MoSync handle to an uncompressed image resource.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(imageButtonHandle, MAW_IMAGE_BUTTON_BACKGROUND_IMAGE, toString(R_MY_IMAGE));
* \endcode
*/
#define MAW_IMAGE_BUTTON_BACKGROUND_IMAGE "backgroundImage"

/**
* Sets the foreground image of the button. This won't be scaled at all.
*
* @validvalue MoSync handle to an uncompressed image resource.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(imageButtonHandle, MAW_IMAGE_BUTTON_IMAGE, toString(R_MY_IMAGE));
* \endcode
*/
#define MAW_IMAGE_BUTTON_IMAGE "image"

/**
* @brief Sets the typeface and style in which the text should be displayed.
*
* @validvalue A font handle received from loading fonts using
* #maFontGetName and #maFontLoadWithName syscalls.
* Note: It is not available on Android, as native image buttons do not have text attached.
* @setonly
*
* @par Example
* \code
*   int nrFonts = maFontGetCount();
*    char buf[256];
*    // Get first font name.
*    maFontGetName(1, buf, 256);
*    // Load that font for size 10.
*    int fontHandle = maFontLoadWithName(buf, 10);
*    // Set that font to the label.
*	maWidgetSetProperty(imageButtonHandle, MAW_IMAGE_BUTTON_FONT_HANDLE, toString(fontHandle));
* \endcode
*/
#define MAW_IMAGE_BUTTON_FONT_HANDLE "fontHandle"

/**
* Sets the image that will be displayed.
*
* @validvalue MoSync handle to an uncompressed image resource.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(buttonHandle, MAW_IMAGE_IMAGE, toString(R_MY_IMAGE));
* \endcode
*/
#define MAW_IMAGE_IMAGE "image"

/**
* @brief Specifies what type of scaling should be applied to the image.
*
* @validvalue Either 'none', 'scaleXY' or 'scalePreserveAspect'. Default 'none'.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(imageHandle, MAW_IMAGE_SCALE_MODE, "scaleXY");
* \endcode
*/
#define MAW_IMAGE_SCALE_MODE "scaleMode"

/**
* The user is allowed to enter any text, including line breaks.
*/
#define MAW_EDIT_BOX_TYPE_ANY 0

/**
* The user is allowed to enter an e-mail address.
*/
#define MAW_EDIT_BOX_TYPE_EMAILADDR 1

/**
* The user is allowed to enter an integer value.
*/
#define MAW_EDIT_BOX_TYPE_NUMERIC 2

/**
* The user is allowed to enter a phone number.
*/
#define MAW_EDIT_BOX_TYPE_PHONENUMBER 3

/**
* The user is allowed to enter a URL.
*/
#define MAW_EDIT_BOX_TYPE_URL 4

/**
            * The user is allowed to enter a real number value.
* This extends #MAW_EDIT_BOX_TYPE_NUMERIC by allowing a decimal point.
*/
#define MAW_EDIT_BOX_TYPE_DECIMAL 5

/**
* The user is allowed to enter any text, except for line breaks.
* Unavailable on some platforms.
*/
#define MAW_EDIT_BOX_TYPE_SINGLE_LINE 6

/**
* Indicates that the text entered is confidential data that should be
* obscured whenever possible. This implies #MAW_EDIT_BOX_FLAG_SENSITIVE.
*/
#define MAW_EDIT_BOX_FLAG_PASSWORD 0

/**
* Indicates that the text entered is sensitive data that the implementation
* must never store into a dictionary or table for use in predictive, auto-completing,
* or other accelerated input schemes. A credit card number is an example of sensitive data.
* Only for Android platform.
*/
#define MAW_EDIT_BOX_FLAG_SENSITIVE 1

/**
* This flag is a hint to the implementation that during text editing,
* the initial letter of each word should be capitalized.
* Not available on Windows Phone 7.1.
*/
#define MAW_EDIT_BOX_FLAG_INITIAL_CAPS_WORD 2

/**
* This flag is a hint to the implementation that during text editing,
* the initial letter of each sentence should be capitalized.
* Input flag not available on Windows Phone 7.1 but the edit box
* type 'ANY' does this by default.
*/
#define MAW_EDIT_BOX_FLAG_INITIAL_CAPS_SENTENCE 3

/**
* Capitalize all characters automatically.
* Not available on Windows Phone 7.1.
*/
#define MAW_EDIT_BOX_FLAG_INITIAL_CAPS_ALL_CHARACTERS 4

/**
* @brief Set or get the text entered in the edit box.
*
* @validvalue A null-terminated string.
*
* @setandget
*
* @par Example set
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_TEXT, "My label");
* \endcode
*
* @par Example get
* \code
* char textBuffer[BUFFER_SIZE];
* int result = maWidgetGetProperty(editBoxHandle, MAW_EDIT_BOX_TEXT, textBuffer, BUFFER_SIZE);
* if (result > 0)
* {
*     // Do something with the edit box text
* }
* \endcode
*/
#define MAW_EDIT_BOX_TEXT "text"

/**
* @brief Set a text in the edit box that acts as a placeholder when an edit box is empty.
*
* @validvalue A null-terminated string.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_PLACEHOLDER, "Enter text...");
* \endcode
*/
#define MAW_EDIT_BOX_PLACEHOLDER "placeholder"

/**
* @brief Shows or hides the virtual keyboard. If shown the focus will be set to this widget.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_SHOW_KEYBOARD, "true");
* \endcode
*/
#define MAW_EDIT_BOX_SHOW_KEYBOARD "showKeyboard"

/**
* @brief Specifies what editing mode the edit box should have.
* @deprecated use #MAW_EDIT_BOX_INPUT_FLAG instead.
* @validvalue Either 'password' or 'text'.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_EDIT_MODE, "password");
* \endcode
*/
#define MAW_EDIT_BOX_EDIT_MODE "editMode"

/**
* @brief Specifies what editing mode the edit box should have.
* Those flags are mutual exclusive, so the previous value is always ignored.
*
* @validvalue One of the values #MAW_EDIT_BOX_TYPE_ANY, #MAW_EDIT_BOX_TYPE_EMAILADDR,
* #MAW_EDIT_BOX_TYPE_NUMERIC, #MAW_EDIT_BOX_TYPE_PHONENUMBER, #MAW_EDIT_BOX_TYPE_URL,
* #MAW_EDIT_BOX_TYPE_DECIMAL, #MAW_EDIT_BOX_TYPE_SINGLELINE.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_INPUT_MODE, toString(MAW_EDIT_BOX_NUMERIC);
* \endcode
*/
#define MAW_EDIT_BOX_INPUT_MODE "inputMode"

/**
* @brief Specifies the editing flags applied to the edit box.
* Those flags are mutual exclusive, so the previous value is always ignored.
*
* @validvalue One of the values #MAW_EDIT_BOX_FLAG_PASSWORD,
* #MAW_EDIT_BOX_FLAG_SENSITIVE, #MAW_EDIT_BOX_FLAG_INITIAL_CAPS_ALL_CHARACTERS,
* #MAW_EDIT_BOX_FLAG_INITIAL_CAPS_WORD, #MAW_EDIT_BOX_FLAG_INITIAL_CAPS_SENTENCE.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_INPUT_FLAG, toString(MAW_EDIT_BOX_FLAG_PASSWORD));
* \endcode
*/
#define MAW_EDIT_BOX_INPUT_FLAG "inputFlag"

/**
* @brief Sets the font color of the edit box's text.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_FONT_COLOR, "0xff0000");
* \endcode
*/
#define MAW_EDIT_BOX_FONT_COLOR "fontColor"

/**
* @brief Set the number of lines.
* Makes the edit box exactly this many lines tall. Note that setting this value
* overrides any other (minimum / maximum) number of lines or height setting.
* A single line edit box will set this value to 1.
* This property will automatically set MAW_EDIT_BOX_TYPE_ANY input mode, so that
* the edit box will become multiline.
* Available on Android only.
*
* @validvalue A positive integer.
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_LINES_NUMBER, "2");
* \endcode
*/
#define MAW_EDIT_BOX_LINES_NUMBER "linesNumber"

/**
* @brief Makes the edit box at most this many lines tall.
* Setting this value overrides any other (maximum) height setting.
* Available on Android only.
*
* @validvalue A positive integer.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_MAX_LINES, "2");
* \endcode
*/
#define MAW_EDIT_BOX_MAX_LINES "maxLines"

/**
* @brief Makes the edit box at least this many lines tall.
* Setting this value overrides any other (minimum) height setting.
* Available on Android only.
*
* @validvalue A positive integer.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_MIN_LINES, "1");
* \endcode
*/
#define MAW_EDIT_BOX_MIN_LINES "minLines"

/**
* @brief Sets or gets the maximum input lenght of the edit box.
* Setting this value enables multiline input mode by default.
* Available on Android, iOS and Windows Phone.
*
* @validvalue A positive integer.
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_MAX_LENGTH, "10");
* \endcode
*/
#define MAW_EDIT_BOX_MAX_LENGTH "maxLength"

/**
* @brief Sets the font color of the placeholder text when an edit box is empty.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(editBoxHandle, MAW_EDIT_BOX_PLACEHOLDER_FONT_COLOR, "0xff0000");
* \endcode
*/
#define MAW_EDIT_BOX_PLACEHOLDER_FONT_COLOR "placeholderFontColor"

/**
* @brief Sets the text part of the list view item. If there is an icon the text will be placed to the right of it, otherwise near the left edge.
*
* @validvalue A null-terminated string.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(listViewItemHandle, MAW_LIST_VIEW_ITEM_TEXT, "My label");
* \endcode
*/
#define MAW_LIST_VIEW_ITEM_TEXT "text"

/**
* @brief Sets an icon of the list view item that is placed to the left of the text.
*
* @validvalue MoSync handle to an uncompressed image resource.
*
* @par Example
* \code
*	maWidgetSetProperty(listViewItemHandle, MAW_LIST_VIEW_ITEM_ICON, toString(R_MY_ICON));
* \endcode
*/
#define MAW_LIST_VIEW_ITEM_ICON "icon"

/**
* @brief Sets the type of list item displayed. Provides the corresponding icon in the right side of the list view.
*
* @note Only available for iOS.
*
* @validvalue One of "none", "hasChildren", "hasDetails" or "isChecked".
*
* @par Example
* \code
*	maWidgetSetProperty(listViewItemHandle, MAW_LIST_VIEW_ITEM_ACCESSORY_TYPE, "hasChildren");
* \endcode
*/
#define MAW_LIST_VIEW_ITEM_ACCESSORY_TYPE "accessoryType"

/**
* @brief Sets the font color of the text part.
*
* @validvalue  A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example set the font color to red.
* \code
*	maWidgetSetProperty(listViewItemHandle, MAW_LIST_VIEW_ITEM_FONT_COLOR, "0xFF0000");
* \endcode
*/
#define MAW_LIST_VIEW_ITEM_FONT_COLOR "fontColor"

/**
* @brief Sets the font size in points of the text part.
*
* @validvalue A float that specifies the number of pixels on Android
* and WP7, and number of points on iOS.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(listViewItemHandle, MAW_LIST_VIEW_ITEM_FONT_SIZE, "13.0");
* \endcode
*/
#define MAW_LIST_VIEW_ITEM_FONT_SIZE "fontSize"

/**
* @brief Sets the typeface and style in which the text should be displayed.
*
* @validvalue A font handle received from loading fonts using
* #maFontGetName and #maFontLoadWithName syscalls.
*
* @setonly
*
* @par Example
* \code
*   int nrFonts = maFontGetCount();
*    char buf[256];
*    // Get first font name.
*    maFontGetName(1, buf, 256);
*    // Load that font for size 10.
*    int fontHandle = maFontLoadWithName(buf, 10);
*    // Set that font to the list view item.
*	maWidgetSetProperty(listViewItemHandle, MAW_LIST_VIEW_ITEM_FONT_HANDLE, toString(fontHandle));
* \endcode
*/
#define MAW_LIST_VIEW_ITEM_FONT_HANDLE "fontHandle"

/**
* @brief Enforces the focus on the list. Generally needed when for some reason the list looses it's focus.
*
* @validvalue None needed.
*
* Platform: Android.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(listViewHandle, MAW_LIST_VIEW_REQUEST_FOCUS, "");
* \endcode
*/
#define MAW_LIST_VIEW_REQUEST_FOCUS "requestFocus"

/**
* @brief Set or get the checked state of the checkbox.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @par Example
* \code
*	maWidgetSetProperty(checkBoxHandle, MAW_CHECK_BOX_CHECKED, "true");
* \endcode
*/
#define MAW_CHECK_BOX_CHECKED "checked"

/**
* @brief Set or get the checked state of the toggle button.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @par Example
* \code
*	maWidgetSetProperty(toggleButtonHandle, MAW_TOGGLE_BUTTON_CHECKED, "true");
* \endcode
*/
#define MAW_TOGGLE_BUTTON_CHECKED "checked"

/**
* @brief Sets how the children in the layout should be aligned in the vertical axis.
*
* @validvalue One of the constants #MAW_ALIGNMENT_TOP, #MAW_ALIGNMENT_CENTER or #MAW_ALIGNMENT_BOTTOM.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(horizontalLayoutHandle, MAW_HORIZONTAL_LAYOUT_CHILD_VERTICAL_ALIGNMENT, MAW_ALIGNMENT_CENTER);
* \endcode
*/
#define MAW_HORIZONTAL_LAYOUT_CHILD_VERTICAL_ALIGNMENT "childVerticalAlignment"

/**
* @brief Sets how the children in the layout should be aligned in the horizontal axis.
*
* @validvalue One of the constants #MAW_ALIGNMENT_LEFT, #MAW_ALIGNMENT_CENTER or #MAW_ALIGNMENT_RIGHT.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(horizontalLayoutHandle, MAW_HORIZONTAL_LAYOUT_CHILD_HORIZONTAL_ALIGNMENT, MAW_ALIGNMENT_CENTER);
* \endcode
*/
#define MAW_HORIZONTAL_LAYOUT_CHILD_HORIZONTAL_ALIGNMENT "childHorizontalAlignment"

/**
* @brief Sets the top padding.
*
* @validvalue The top padding in pixels.
*
* @setonly
*
* @par Example
* \code
*  // Set a 50px top padding.
*	maWidgetSetProperty(horizontalLayoutHandle, MAW_HORIZONTAL_LAYOUT_PADDING_TOP, "50");
* \endcode
*/
#define MAW_HORIZONTAL_LAYOUT_PADDING_TOP "paddingTop"

/**
* @brief Sets the left padding.
*
* @validvalue The left padding in pixels.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(horizontalLayoutHandle, MAW_HORIZONTAL_LAYOUT_PADDING_LEFT, "50");
* \endcode
*/
#define MAW_HORIZONTAL_LAYOUT_PADDING_LEFT "paddingLeft"

/**
* @brief Sets the right padding.
*
* @validvalue The right padding in pixels.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(horizontalLayoutHandle, MAW_HORIZONTAL_LAYOUT_PADDING_RIGHT, "50");
* \endcode
*/
#define MAW_HORIZONTAL_LAYOUT_PADDING_RIGHT "paddingRight"

/**
* @brief Sets the bottom padding.
*
* @validvalue The bottom padding in pixels.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(horizontalLayoutHandle, MAW_HORIZONTAL_LAYOUT_PADDING_BOTTOM, "50");
* \endcode
*/
#define MAW_HORIZONTAL_LAYOUT_PADDING_BOTTOM "paddingBottom"

/**
* @brief Sets the isScrollable boolean
*
* @validvalue "true" or "false", for "true" the layout will become scrollable otherwise it will become unscrollable
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(verticalLayoutHandle, MAW_RELATIVE_LAYOUT_SCROLLABLE, "true");
* \endcode
*/
#define MAW_RELATIVE_LAYOUT_SCROLLABLE "scrollable"

/**
* @brief Sets the content offset. The layout will be scrolled to the given coordinate.
* Platform: iOS.
*
* @validvalue Two int values separated by dash "-". The first int value represents the x coord and
* the second value represents the y coord.
* If the value is not as described the content offset will not be set and syscall will return
* #MAW_RES_INVALID_PROPERTY_VALUE.
* The default value is (0,0).
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(verticalLayoutHandle, MAW_RELATIVE_LAYOUT_SCROLLABLE, "30-30");
* \endcode
*/
#define MAW_RELATIVE_LAYOUT_CONTENT_OFFSET "contentOffset"

/**
* @brief Sets how the children in the layout should be aligned in the vertical axis.
*
* @validvalue One of the constants #MAW_ALIGNMENT_TOP, #MAW_ALIGNMENT_CENTER or #MAW_ALIGNMENT_BOTTOM.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(verticalLayoutHandle, MAW_VERTICAL_LAYOUT_CHILD_VERTICAL_ALIGNMENT, MAW_ALIGNMENT_CENTER);
* \endcode
*/
#define MAW_VERTICAL_LAYOUT_CHILD_VERTICAL_ALIGNMENT "childVerticalAlignment"

/**
* @brief Sets how the children in the layout should be aligned in the horizontal axis.
*
* @validvalue One of the constants #MAW_ALIGNMENT_LEFT, #MAW_ALIGNMENT_CENTER or #MAW_ALIGNMENT_RIGHT.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(verticalLayoutHandle, MAW_VERTICAL_LAYOUT_CHILD_HORIZONTAL_ALIGNMENT, MAW_ALIGNMENT_CENTER);
* \endcode
*/
#define MAW_VERTICAL_LAYOUT_CHILD_HORIZONTAL_ALIGNMENT "childHorizontalAlignment"

/**
* @brief Sets the top padding.
*
* @validvalue The top padding in pixels.
*
* @setonly
*
* @par Example
* \code
*  // Set a 50px top padding.
*	maWidgetSetProperty(verticalLayoutHandle, MAW_VERTICAL_LAYOUT_PADDING_TOP, "50");
* \endcode
*/
#define MAW_VERTICAL_LAYOUT_PADDING_TOP "paddingTop"

/**
* @brief Sets the left padding.
*
* @validvalue The left padding in pixels.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(verticalLayoutHandle, MAW_VERTICAL_LAYOUT_PADDING_LEFT, "50");
* \endcode
*/
#define MAW_VERTICAL_LAYOUT_PADDING_LEFT "paddingLeft"

/**
* @brief Sets the right padding.
*
* @validvalue The right padding in pixels.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(verticalLayoutHandle, MAW_VERTICAL_LAYOUT_PADDING_RIGHT, "50");
* \endcode
*/
#define MAW_VERTICAL_LAYOUT_PADDING_RIGHT "paddingRight"

/**
* @brief Sets the bottom padding.
*
* @validvalue The bottom padding in pixels.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(verticalLayoutHandle, MAW_VERTICAL_LAYOUT_PADDING_BOTTOM, "50");
* \endcode
*/
#define MAW_VERTICAL_LAYOUT_PADDING_BOTTOM "paddingBottom"

/**
* @brief Sets the isScrollable boolean
*
* @validvalue "true" or "false", for "true" the layout will become scrollable otherwise it will become unscrollable
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(verticalLayoutHandle, MAW_VERTICAL_LAYOUT_SCROLLABLE, "true");
* \endcode
*/
#define MAW_VERTICAL_LAYOUT_SCROLLABLE "scrollable"

/**
* @brief Set or get the current text of the search bar.
*
* @validvalue A null-terminated string.
*
* @setandget
*
* @par Example
* \code
*	maWidgetSetProperty(searchBarHandle, MAW_SEARCH_BAR_TEXT, "My search query");
* \endcode
*/
#define MAW_SEARCH_BAR_TEXT "text"

/**
* @brief Set a text in the search bar that acts as a placeholder when an edit box is empty.
*
* @validvalue A null-terminated string.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(searchBarHandle, MAW_SEARCH_BAR_PLACEHOLDER, "Search...");
* \endcode
*/
#define MAW_SEARCH_BAR_PLACEHOLDER "placeholder"

/**
* @brief Shows or hides the virtual keyboard. If shown the focus will be set to this widget.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(searchBarHandle, MAW_SEARCH_BAR_SHOW_KEYBOARD, "true");
* \endcode
*/
#define MAW_SEARCH_BAR_SHOW_KEYBOARD "showKeyboard"

/**
* @brief Property that tells the gl view that it should be redrawn.
*
* @validvalue The value isn't taken into account.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(glViewHandle, MAW_GL_VIEW_INVALIDATE, "");
* \endcode
*/
#define MAW_GL_VIEW_INVALIDATE "invalidate"

/**
* @brief Property that tells the gl view that all following gl calls will apply to this view.
*
* @validvalue The value isn't taken into account.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(glViewHandle, MAW_GL_VIEW_BIND, "");
* \endcode
*/
#define MAW_GL_VIEW_BIND "bind"

/**
* @brief Set or get the currently displayed url in the web view.
*
* You can also use this property to evaluate JavaScript in the WebView,
* by using a url that starts with "javascript:" followed by the
* JavaScript code.
*
* Note that if the url is a non-local url that will cause data to
* be downloaded over the network, you need to set "Internet Access"
* permissions for the application.
*
* @validvalue Any valid URL.
*
* @setandget
*
* @par Example
* @code
*	maWidgetSetProperty(webViewHandle, MAW_WEB_VIEW_URL, "http://www.mosync.com/");
* @endcode
*
* @code
*	maWidgetSetProperty(
*	webViewHandle,
*	MAW_WEB_VIEW_URL,
*	"javascript:document.body.innerHTML= '<p>Hello World</p>'");
* @endcode
*/
#define MAW_WEB_VIEW_URL "url"

/**
* @brief Set the currently displayed HTML data in the web view.
*
* @validvalue Any valid HTML data.
*
* @setonly
*
* @par Example
* @code
*	maWidgetSetProperty(webViewHandle, MAW_WEB_VIEW_HTML, "<h1>Hello World</h1>");
* @endcode
*/
#define MAW_WEB_VIEW_HTML "html"

/**
* @brief Set the base URL used by the web-view when loading relative paths.
* The value of this URL is used when setting the #MAW_WEB_VIEW_URL and
* #MAW_WEB_VIEW_HTML properties. The default value for this property points to
* the Assets folder in the local file system ("file://pathToLocalFileSystem/Assets/").
*
* @note Use: #maGetSystemProperty ("mosync.path.local.url") to find the baseURL
* for the local file system.
*
* @validvalue Any valid URL schema.
*
* @setandget
*/
#define MAW_WEB_VIEW_BASE_URL "baseUrl"

/**
* @brief Set the pattern used to "soft hook" urls, to get notified
* when pages are being loaded.
*
* When this pattern matches a url that is being requested
* to load in the WebView, event #MAW_EVENT_WEB_VIEW_HOOK_INVOKED
* is sent, and the page loads NORMALLY.
*
* Note that when receiving event #MAW_EVENT_WEB_VIEW_HOOK_INVOKED
* you MUST deallocate the urlData handle of the event by calling
* maDestroyPlaceholder on the handle. Destory the handle when you are
* done reading the url data, to avoid that memory will get used up.
*
* The pattern is a url pattern specified using regular expression
* syntax, according to the ICU regular expression standard, using
* complete match. For example, the ".*" matching expression is used
* to match any url string. To match all HTTP requests, use the
* pattern "http://.*". To match all requests for a specific domain,
* use a pattern like ".*google.com.*". For further infomation, see:
* http://userguide.icu-project.org/strings/regexp
* When typing a C-string with a pattern that contains a matching
* expression with a backslash, make sure to escape the backslash,
* for example "\B" should be "\\B".
*
* By setting the pattern to an empty string, the soft hook mechanism
* is turned off, and #MAW_EVENT_WEB_VIEW_HOOK_INVOKED is not sent.
*
* Both "soft" hooks and "hard" hooks can be enabled simultaneously,
* but only one hook pattern can be used for each type of hook. When
* setting a new hook pattern, the old hook is replaced.
*
* Note that urls opened using maWidgetSetProperty with the property
* MAW_WEB_VIEW_URL are NOT hooked. This way of loading a page is
* excluded from the hook mechanism to prevent "loops" when loading
* pages.
*
* @validvalue A string with a url pattern.
*
* @setonly
*
* @par Example
* @code
*   // Hook all urls.
*	maWidgetSetProperty(webViewHandle, MAW_WEB_VIEW_SOFT_HOOK, ".*");
*
*   // Hook no urls.
*	maWidgetSetProperty(webViewHandle, MAW_WEB_VIEW_SOFT_HOOK, "");
*
*   // Hook urls that start with "mosync:".
*	maWidgetSetProperty(webViewHandle, MAW_WEB_VIEW_SOFT_HOOK, "mosync://.*");
* @endcode
*/
#define MAW_WEB_VIEW_SOFT_HOOK "softHook"

/**
* @brief Set the pattern used to "hard hook" urls, to get notified
* and prevent loading of pages.
*
* Hard hooks are useful for communicating events from a WebView,
* for example by setting document.location to a url string in
* JavaScript. Example: document.location = 'mosync://ExitApp'
* The application can then examine the url data and take action
* depending on the url content.
*
* When this pattern matches a url that is being requested
* to load in the WebView, event #MAW_EVENT_WEB_VIEW_HOOK_INVOKED
* is sent, and page loading is ABORTED.
*
* Note that when receiving event #MAW_EVENT_WEB_VIEW_HOOK_INVOKED
* you MUST deallocate the urlData handle of the event by calling
* maDestroyPlaceholder on the handle. Destory the handle when you are
* done reading the url data, to avoid that memory will get used up.
*
* The pattern is a url pattern specified using regular expression
* syntax, according to the ICU regular expression standard, using
* complete match. For example, the ".*" matching expression is used
* to match any url string. To match all HTTP requests, use the
* pattern "http://.*". To match all requests for a specific domain,
* use a pattern like ".*google.com.*". For further infomation, see:
* http://userguide.icu-project.org/strings/regexp
* When typing a C-string with a pattern that contains a matching
* expression with a backslash, make sure to escape the backslash,
* for example "\B" should be "\\B".
*
* By setting the pattern to an empty string, the soft hook mechanism
* is turned off, and #MAW_EVENT_WEB_VIEW_HOOK_INVOKED is not sent.
*
* Both "soft" hooks and "hard" hooks can be enabled simultaneously,
* but only one hook pattern can be used for each type of hook. When
* setting a new hook pattern, the old hook is replaced.
*
* The "hard" hook property takes precedence over the "soft" hook
* property. When both properties are set,
* #MAW_EVENT_WEB_VIEW_HOOK_INVOKED is sent once, for the
* "hard" hook type.
*
* Note that urls opened using maWidgetSetProperty with the property
* MAW_WEB_VIEW_URL are NOT hooked. This way of loading a page is
* excluded from the hook mechanism to prevent "loops" when loading
* pages.
*
* @validvalue A string with a url pattern.
*
* @setonly
*
* @par Example
* @code
*   // Hook urls that start with "mosync:".
*	maWidgetSetProperty(webViewHandle, MAW_WEB_VIEW_HARD_HOOK, "mosync://.*");
* @endcode
*/
#define MAW_WEB_VIEW_HARD_HOOK "hardHook"

/**
* @brief Property to get a new url whenever the webview changes the url.
* See #MAW_EVENT_WEB_VIEW_URL_CHANGED.
*
* @deprecated Use event #MAW_EVENT_WEB_VIEW_HOOK_INVOKED
*
* @validvalue Any valid URL.
*
* @getonly
*
* @par Example
* @code
* char urlBuffer[BUFFER_SIZE];
* int result = maWidgetGetProperty(
*     webViewHandle,
*     MAW_WEB_VIEW_NEW_URL,
*     urlBuffer,
*     BUFFER_SIZE);
* if (result > 0)
* {
*     // Do something with URL.
* }
* @endcode
*/
#define MAW_WEB_VIEW_NEW_URL "newurl"

/**
* @brief Sets or gets whether the horizontal scrollbar should be drawn or not.
* Available only on Android for the moment.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @setandget
*
* @par Example
* \code
        *   maWidgetSetProperty(webViewHandle, MAW_WEB_VIEW_HORIZONTAL_SCROLLBAR_ENABLED, "true");
* \endcode
*/
#define MAW_WEB_VIEW_HORIZONTAL_SCROLL_BAR_ENABLED "horizontalScrollBarEnabled"

/**
* @brief Sets or gets whether the vertical scrollbar should be drawn or not.
* The scrollbar is drawn by default.
* Available only on Android for the moment.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @setandget
*
* @par Example
* \code
        *   maWidgetSetProperty(webViewHandle, MAW_WEB_VIEW_VERTICAL_SCROLLBAR_ENABLED, "false");
* \endcode
*/
#define MAW_WEB_VIEW_VERTICAL_SCROLL_BAR_ENABLED "verticalScrollBarEnabled"

/**
* @brief Enable or disable the zoom controls of the web view.
*
* @validvalue "true" to enable, "false" to disable.
*
* @setonly
*
* @par Example
* @code
*	maWidgetSetProperty(webViewHandle, MAW_WEB_VIEW_ENABLE_ZOOM, "true");
* @endcode
*/
#define MAW_WEB_VIEW_ENABLE_ZOOM "enableZoom"

/**
* @brief Navigate forward or back the browsing history.
*
* @validvalue "back" or "forward".
*
* @setonly
*
* @par Example
* @code
*	maWidgetSetProperty(webViewHandle, MAW_WEB_VIEW_NAVIGATE, "back");
* @endcode
*/
#define MAW_WEB_VIEW_NAVIGATE "navigate"

/**
* @brief Sets or gets the range of the progress bar to 0..max.
*
* @validvalue An positive integer that specifies the upper range of this progress bar.
*
* @setandget
*
* @par Example
* \code
        *   maWidgetSetProperty(progressBarHandle, MAW_PROGRESS_BAR_MAX, "100");
* \endcode
*/
#define MAW_PROGRESS_BAR_MAX "max"

/**
* @brief Set or gets the current progress to the specified value.
*
* @validvalue An int that specifies the new progress, between 0 and max value. See \ref MAW_PROGRESS_BAR_MAX.
*
* @setandget
*
* @par Example
* \code
* maWidgetSetProperty(progressBarHandle, MAW_PROGRESS_BAR_PROGRESS, "10");
* \endcode
*/
#define MAW_PROGRESS_BAR_PROGRESS "progress"

/**
* @brief Increase the progress bar's progress by the specified amount.
*
* @validvalue An int that specifies the amount by which the progress must be increased.
*
* @setonly
*
* @par Example
* \code
        *   maWidgetSetProperty(progressBarHandle, MAW_PROGRESS_BAR_INCREMENT_PROGRESS, "20");
* \endcode
*/
#define MAW_PROGRESS_BAR_INCREMENT_PROGRESS "incrementProgress"

/**
* @brief Sets if the indicator is still on or off.
* If set to false, it doesn't delete the widget just dismisses it.
* @validvalue A boolean string 'true' or 'false'.
*
* @setonly
*
* @par Example
* \code
*   // The activity is done. Now this widget is dismissed.
        *   maWidgetSetProperty(activityIndicatorHandle, MAW_ACTIVITY_INDICATOR_IN_PROGRESS, "false");
* \endcode
*/
#define MAW_ACTIVITY_INDICATOR_IN_PROGRESS "inProgress"

/**
* @brief Sets or gets the range of the slider to 0..max.
*
* @validvalue An positive integer that specifies the upper range of this slider.
*
* @setandget
*
* @par Example
* \code
        *   maWidgetSetProperty(sliderHandle, MAW_SLIDER_MAX, "100");
* \endcode
*/
#define MAW_SLIDER_MAX "max"

/**
* @brief Set or gets the current value to the slider.
*
* @validvalue An int that specifies the new value, between 0 and max value. See \ref MAW_SLIDER_MAX.
*
* @setandget
*
* @par Example
* \code
* maWidgetSetProperty(sliderHandle, MAW_SLIDER_VALUE, "10");
* \endcode
*/
#define MAW_SLIDER_VALUE "value"

/**
* @brief Increase the current value of the slider by the specified amount.
*
* @validvalue An int that specifies the amount by which the slider value must be increased.
*
* @setonly
*
* @par Example
* \code
        *   maWidgetSetProperty(sliderHandle, MAW_SLIDER_INCREASE_VALUE, "20");
* \endcode
*/
#define MAW_SLIDER_INCREASE_VALUE "increaseValue"

/**
* @brief Decreases the current value of the slider by the specified amount.
*
* @validvalue An int that specifies the amount by which the slider value must be decreased.
*
* @setonly
*
* @par Example
* \code
        *   maWidgetSetProperty(sliderHandle, MAW_SLIDER_DECREASE_VALUE, "20");
* \endcode
*/
#define MAW_SLIDER_DECREASE_VALUE "decreaseValue"

/**
* @deprecated use MAX_DATE_YEAR, MAX_DATE_MONTH and MAX_DATE_DAY instead
* @brief Sets or gets  maximal date supported by this DatePicker in seconds since January 1, 1970 00:00:00.
* NOTE: On Android the default maximal date is 12/31/2100.
* NOTE: The property can be set on iOS only.
* @validvalue A long int that specifies the upper range of this date picker.
*
* @setandget
*
* @par Example
* \code
        *   maWidgetSetProperty(datePickerHandle, MAW_DATE_PICKER_MAX_DATE, "1291939200");
*   // Now the maximum date is  the 10th of December 2010.
* \endcode
*/
#define MAW_DATE_PICKER_MAX_DATE "maxDate"

/**
* @brief Sets or gets the year of the maximal date supported by this DatePicker.
* Note: On Android the default maximal date year is 2100.
* Note: On Windows Phone 7 and iOS the default maximal date year is 9999.
* @validvalue An int that specifies the value of the year of the maximal date
* for this date picker.
*
* @setandget
*
* @par Example
* \code
*   maWidgetSetProperty(datePickerHandle, MAW_DATE_PICKER_MAX_DATE_YEAR, "2999");
* \endcode
*/
#define MAW_DATE_PICKER_MAX_DATE_YEAR "maxdateyear"

/**
* @brief Sets or gets the month of the maximal date supported by this DatePicker.
* @validvalue An int that specifies the value of the month of the maximal date for
* this date picker. The value must be a number between 1 and 12.
*
* @setandget
*
* @par Example
* \code
*   maWidgetSetProperty(datePickerHandle, MAW_DATE_PICKER_MAX_DATE_MONTH, "12");
* \endcode
*/
#define MAW_DATE_PICKER_MAX_DATE_MONTH "maxdatemonth"

/**
* @brief Sets or gets the day of the maximal date supported by this DatePicker.
* @validvalue An int that specifies the value of the day of the maximal date for
* this date picker. This number must be a valid day of the month specified with
* the MAX_DATE_MONTH property.
*
* @setandget
*
* @par Example
* \code
*   maWidgetSetProperty(datePickerHandle, MAW_DATE_PICKER_MAX_DATE_DAY, "31");
* \endcode
*/
#define MAW_DATE_PICKER_MAX_DATE_DAY "maxdateday"

/**
* @deprecated use MIN_DATE_YEAR, MIN_DATE_MONTH and MIN_DATE_DAY instead
* @brief Sets or gets  minimal date supported by this DatePicker in seconds since January 1, 1970 00:00:00
* Note: On Android the default minimal date is 01/01/1900.
* @validvalue A long int that specifies the minimal supported date.
*
* @setandget
*
* @par Example
* \code
        *   maWidgetSetProperty(datePickerHandle, MAW_DATE_PICKER_MIN_DATE, "946684800");
*   // Now the minimum date is the 1st of January 2000.
* \endcode
*/
#define MAW_DATE_PICKER_MIN_DATE "minDate"

/**
* @brief Sets or gets the year of the minimal date supported by this DatePicker.
* Note: On Android the default minimal date year  is 1900.
* Note: On Windows Phone 7 and iOS the default minimal date year is 1.
* @validvalue An int that specifies the value of the year of the minimal date
* for this date picker.
*
* @setandget
*
* @par Example
* \code
*   maWidgetSetProperty(datePickerHandle, MAW_DATE_PICKER_MIN_DATE_YEAR, "1830");
* \endcode
*/
#define MAW_DATE_PICKER_MIN_DATE_YEAR "mindateyear"

/**
* @brief Sets or gets the month of the minimal date supported by this DatePicker.
* @validvalue An int that specifies the value of the month of the minimal date for
* this date picker. The value must be a number between 1 and 12.
*
* @setandget
*
* @par Example
* \code
*   maWidgetSetProperty(datePickerHandle, MAW_DATE_PICKER_MIN_DATE_MONTH, "1");
* \endcode
*/
#define MAW_DATE_PICKER_MIN_DATE_MONTH "mindatemonth"

/**
* @brief Sets or gets the day of the minimal date supported by this DatePicker.
* @validvalue An int that specifies the value of the day of the minimal date for
* this date picker. This number must be a valid day of the month specified with
* the MIN_DATE_MONTH property.
*
* @setandget
*
* @par Example
* \code
*   maWidgetSetProperty(datePickerHandle, MAW_DATE_PICKER_MIN_DATE_DAY, "1");
* \endcode
*/
#define MAW_DATE_PICKER_MIN_DATE_DAY "mindateday"

/**
* @brief Sets or gets the currently displayed year.
*
* @validvalue An int that specifies a valid year.
*
* @setandget
*
* @par Example
* \code
*   char yearBuffer[BUFFER_SIZE];
        *   int getStatus = maWidgetGetProperty(datePickerHandle, MAW_DATE_PICKER_YEAR, yearBuffer, BUFFER_SIZE);
*   if(getStatus == MAW_RES_OK)
*   {
*       // Do something with the year.
*   }
* \endcode
*/
#define MAW_DATE_PICKER_YEAR "year"

/**
* @brief Sets or gets the currently displayed month.
*
* @validvalue An int that specifies a valid month.
*
* @setandget
*
* @par Example
* \code
*   char monthBuffer[BUFFER_SIZE];
        *   int getStatus = maWidgetGetProperty(datePickerHandle, MAW_DATE_PICKER_MONTH, monthBuffer, BUFFER_SIZE);
*   if(getStatus == MAW_RES_OK)
*   {
*       // Do something with the month.
*   }
* \endcode
*/
#define MAW_DATE_PICKER_MONTH "month"

/**
* @brief Sets or gets the currently displayed day of month.
*
* @validvalue An int that specifies a valid day of month.
*
* @setandget
*
* @par Example
* \code
*   char dayBuffer[BUFFER_SIZE];
        *   int getStatus = maWidgetGetProperty(datePickerHandle, MAW_DATE_PICKER_DAY_OF_MONTH, dayBuffer, BUFFER_SIZE);
*   if(getStatus == MAW_RES_OK)
*   {
*       // Do something with the day.
*   }
* \endcode
*/
#define MAW_DATE_PICKER_DAY_OF_MONTH "dayOfMonth"

/**
* @brief Sets or gets the current hour in 24h mode( in the range: 0-23 ).
*
* @validvalue An int that specifies the current hour.
*
* @setandget
*
* @par Example
* \code
*   // Set hour to 20, that is 8PM.
        *   maWidgetSetProperty(timePickerHandle, MAW_TIME_PICKER_CURRENT_HOUR, "20");
* \endcode
*/
#define MAW_TIME_PICKER_CURRENT_HOUR "currentHour"

/**
* @brief Sets or gets the current minute (0-59).
*
* @validvalue An int that specifies the current minute.
*
* @setandget
*
* @par Example
* \code
*   char buf[BUFFER_SIZE];
        *   maWidgetGetProperty(timePickerHandle, MAW_TIME_PICKER_CURRENT_MINUTE, buf, BUFFER_SIZE);
*   // Do something with the minute.
* \endcode
*/
#define MAW_TIME_PICKER_CURRENT_MINUTE "currentMinute"

/**
* @brief Sets or gets the current value for the number picker.
* If the value is less than MAW_NUMBER_PICKER_MIN_VALUE property value, the current value is set to min.
* If the value is greater than MAW_NUMBER_PICKER_MAX_VALUE value, the current value is set to max.
*
* @validvalue A valid int.
*
* @setandget
*
* @par Example
* \code
        *   maWidgetSetProperty(numberPickerHandle, MAW_NUMBER_PICKER_VALUE, "50");
* \endcode
*/
#define MAW_NUMBER_PICKER_VALUE "value"

/**
* @brief Sets or gets the min value of the picker.
*
* @validvalue An int that specifies the minimum value.
*
* @setandget
*
* @par Example
* \code
        *   maWidgetSetProperty(numberPickerHandle, MAW_NUMBER_PICKER_MIN_VALUE, "0");
* \endcode
*/
#define MAW_NUMBER_PICKER_MIN_VALUE "minValue"

/**
* @brief Sets or gets the max value of the picker.
*
* @validvalue An int that specifies the maximum value.
*
* @setandget
*
* @par Example
* \code
        *   maWidgetSetProperty(numberPickerHandle, MAW_NUMBER_PICKER_MAX_VALUE, "100");
* \endcode
*/
#define MAW_NUMBER_PICKER_MAX_VALUE "maxValue"

/**
* @brief Sets the video path.
* Note: available on Android and Windows Phone.
* @validvalue Any valid path.
*
* @setonly
*
* @par Example
* \code
*   // Set the video path.
        *   maWidgetSetProperty(videoViewHandle, MAW_VIDEO_VIEW_PATH, "\data\Video1.wav");
* \endcode
*/
#define MAW_VIDEO_VIEW_PATH "path"

/**
* @brief Sets the video url.
*
* @validvalue Any valid streaming url.
*
* @setonly
*
* @par Example
* \code
*   // Set the video path.
        *   maWidgetSetProperty(videoViewHandle, MAW_VIDEO_VIEW_URL, "www.example.com/play.m3u8");
* \endcode
*/
#define MAW_VIDEO_VIEW_URL "url"

/**
* @brief Start,pause or stop the video playback.
*
* @validvalue MAW_VIDEO_WIDGET_ACTION_PLAY, MAW_VIDEO_WIDGET_ACTION_PAUSE or MAW_VIDEO_WIDGET_ACTION_STOP constants.
*
* @setonly
*
* @par Example
* \code
*   // Start the playback.
        *   maWidgetSetProperty(videoViewHandle, MAW_VIDEO_WIDGET_ACTION, toString(MAW_VIDEO_WIDGET_ACTION_PLAY));
* \endcode
*/
#define MAW_VIDEO_VIEW_ACTION "action"

/**
* @brief Seeks into the video.
*
* @validvalue A valid integer for milliseconds.
*
* @setonly
*
* @par Example
* \code
        *   maWidgetSetProperty(videoViewHandle, MAW_VIDEO_VIEW_SEEK_TO, "10000");
* \endcode
*/
#define MAW_VIDEO_VIEW_SEEK_TO "seekTo"

/**
* @brief Gets the video file duration.
*
* NOTE: On Android this value can be retrieved after MAW_VIDEO_VIEW_STATE_SOURCE_READY is received.
*       On iOS this value can be retrieved after MAW_VIDEO_STATE_PLAYING is received.
* @validvalue An integer representing the total media duration in milliseconds.
*
* @getonly
*
* @par Example
* \code
*   char buf[BUFFER_SIZE];
        *   maWidgetGetProperty(videoViewHandle, MAW_VIDEO_VIEW_DURATION, buf, BUFFER_SIZE);
*   // Do something with the duration.
* \endcode
*/
#define MAW_VIDEO_VIEW_DURATION "duration"

/**
* @brief Gets the buffer percentage of the played video file.
*
* @validvalue An int.
*
* @getonly
*
* @par Example
* \code
*   char buf[BUFFER_SIZE];
        *   maWidgetGetProperty(videoViewHandle, MAW_VIDEO_VIEW_BUFFER_PERCENTAGE, buf, BUFFER_SIZE);
*   // Do something with the percentage.
* \endcode
*/
#define MAW_VIDEO_VIEW_BUFFER_PERCENTAGE "bufferPercentage"

/**
* @brief Gets the current position in the video file.
*
* @validvalue An integer representing the current media position in seconds.
*
* @getonly
*
* @par Example
* \code
*   char buf[BUFFER_SIZE];
        *   maWidgetGetProperty(videoViewHandle, MAW_VIDEO_VIEW_CURRENT_POSITION, buf, BUFFER_SIZE);
*   // Do something with the position.
* \endcode
*/
#define MAW_VIDEO_VIEW_CURRENT_POSITION "currentPosition"

/**
* @brief Show/hide video control.
* Default value is "true"(video control is shown).
* Platform: iOS.
*
* @validvalue "true" show the video control, "false" hide the video control.
*
* @setandget
*
* @par Example
* \code
*   char buf[BUFFER_SIZE];
        *   maWidgetGetProperty(videoViewHandle, MAW_VIDEO_VIEW_CONTROL, buf, BUFFER_SIZE);
* \endcode
*/
#define MAW_VIDEO_VIEW_CONTROL "control"

/**
* @brief Sets or gets the title.
*
* @validvalue A null-terminated string.
*
* @setandget
*
* @par Example
* \code
        *   maWidgetSetProperty(navBarHandle, MAW_NAV_BAR_TITLE, "MyScreen");
* \endcode
*/
#define MAW_NAV_BAR_TITLE "title"

/**
* Sets the icon of the nav bar. This won't be scaled at all.
*
* @validvalue MoSync handle to an uncompressed image resource. The size of the image should be small enough to fit in the nav bar.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(navBarHandle, MAW_NAV_BAR_ICON, toString(R_MY_IMAGE));
* \endcode
*/
#define MAW_NAV_BAR_ICON "icon"

/**
* @brief Sets the text for the back button.
* This can be set only when the navigation bar was
* attached to a screen that is not part of a stack screen.
* Note: this is available only on iOS.
* On Android the back behavior is handled by the device's back button.
*
* @validvalue A null-terminated string.
*
* @setandget
*
* @par Example
* \code
        *   maWidgetSetProperty(navBarHandle, MAW_NAV_BAR_BACK_BTN, "Home");
* \endcode
*/
#define MAW_NAV_BAR_BACK_BTN "backBtn"

/**
* @brief Sets the font color of the title.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(navBarHandle, MAW_NAV_BAR_TITLE_FONT_COLOR, "0xff0000");
* \endcode
*/
#define MAW_NAV_BAR_TITLE_FONT_COLOR "titleFontColor"

/**
* @brief Sets the font size in points of the title.
*
* @validvalue A float that specifies the number of pixels on Android
* and WP7, and number of points on iOS.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(navBarHandle, MAW_NAV_BAR_TITLE_FONT_SIZE, "13.0");
* \endcode
*/
#define MAW_NAV_BAR_TITLE_FONT_SIZE "titleFontSize"

/**
* @brief Sets the typeface and style in which the title should be displayed.
*
* @validvalue A font handle received from loading fonts using
* #maFontGetName and #maFontLoadWithName syscalls.
*
* @setonly
*
* @par Example
* \code
*   int nrFonts = maFontGetCount();
*    char buf[256];
*    // Get first font name.
*    maFontGetName(1, buf, 256);
*    // Load that font for size 10.
*    int fontHandle = maFontLoadWithName(buf, 10);
*    // Set that font to the label.
*	maWidgetSetProperty(navBarHandle, MAW_NAV_BAR_TITLE_FONT_HANDLE, toString(fontHandle));
* \endcode
*/
#define MAW_NAV_BAR_TITLE_FONT_HANDLE "titleFontHandle"

/**
* @brief Sets or gets the title.
* If the property receives am empty string then the title bar becomes invisible.
* @validvalue A null-terminated string.
*
* @setandget
*
* @par Example
* \code
*   maWidgetSetProperty(dialogHandle, MAW_MODAL_DIALOG_TITLE, "MyDialog");
* \endcode
*/
#define MAW_MODAL_DIALOG_TITLE "title"

/**
* @brief Sets the origin arrow position for a popover dialog.
* Note: This property is only available on the iPad.
*
* @validvalue One of the five MAW_CONSTANT_ARROW_ values, or a bitwise or combination of them.
*
* @setonly
*
* @par Example
* \code
*   // Allow the popover to use any arrow
*   maWidgetSetProperty(dialogHandle, MAW_MODAL_DIALOG_ARROW_POSITION, MAW_CONSTANT_ARROW_ANY);
* \endcode
*/
#define MAW_MODAL_DIALOG_ARROW_POSITION "arrowPosition"

/**
* @brief Allow or prohibits the user from dismissing a popover dialog by tapping outside of it.
* Note: This property is only available on the iPad.
*
* @validvalue "true"or "false".
*
* @setonly
*
* @par Example
* \code
*   // Prohibit the user from dismissing the popover
*   maWidgetSetProperty(dialogHandle, MAW_MODAL_DIALOG_USER_CAN_DISMISS, "false");
* \endcode
*/
#define MAW_MODAL_DIALOG_USER_CAN_DISMISS "userCanDismiss"

/**
* @brief Get the checked state of the radio button.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @getonly
*
* @par Example
* \code
* char state[BUFFER_SIZE];
*   maWidgetGetProperty(radioButtonHandle, MAW_RADIO_BUTTON_CHECKED, state, BUFFER_SIZE);
* \endcode
*/
#define MAW_RADIO_BUTTON_CHECKED "checked"

/**
* @brief Change the checked state of the view to the inverse of its current state.
* If the radio button is already checked, this method will not toggle the radio button.
*
* @validvalue No neccessary value needed.
*
* @setonly
*
* @par Example
* \code
*   maWidgetSetProperty(radioButtonHandle, MAW_RADIO_BUTTON_TOGGLE, "");
* \endcode
*/
#define MAW_RADIO_BUTTON_TOGGLE "toggle"

/**
* @brief Set or get the text to display.
*
* @validvalue A null-terminated string.
*
* @setandget
*
* @par Example
* \code
*   maWidgetSetProperty(radioButtonHandle, MAW_RADIO_BUTTON_TEXT, "Option A");
* \endcode
*/
#define MAW_RADIO_BUTTON_TEXT "text"

/**
* @brief Specifies the text color of the radio button.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maWidgetSetProperty(widgetHandle, MAW_RADIO_BUTTON_TEXT_COLOR, "0xff0000"); // Red
* \endcode
*/
#define MAW_RADIO_BUTTON_TEXT_COLOR "textcolor"

/**
* @brief Add the radio buttons grouped in this widget.
* This is the only widget type that accepts Radio Buttons as children.
*
* @validvalue An int specifying the radio button handle.
*
* @setonly
*
* @par Example
* \code
*   // Attach two radio buttons to this group.
*   maWidgetSetProperty(radioGroupHandle, MAW_RADIO_GROUP_ADD_VIEW, "3");
*   maWidgetSetProperty(radioGroupHandle, MAW_RADIO_GROUP_ADD_VIEW, "4");
* \endcode
*/
#define MAW_RADIO_GROUP_ADD_VIEW "addview"

/**
* @brief Clear the selection.
* When the selection is cleared, no radio button in this group is selected and
* #MAW_RADIO_GROUP_SELECTED returns -1.
*
* @validvalue No neccessary value needed.
*
* @setonly
*
* @par Example
* \code
*   maWidgetSetProperty(radioGroupHandle, MAW_RADIO_GROUP_CLEAR_CHECK, "");
* \endcode
*/
#define MAW_RADIO_GROUP_CLEAR_CHECK "clearcheck"

/**
* @brief Set or get the selected radio button in this group.
* Upon empty selection, get property returns -1.
* Setting -1 as the selection identifier clears the selection; such an operation
* is equivalent to invoking #MAW_RADIO_GROUP_CLEAR_CHECK.
*
* @validvalue A valid radio button handle.
*
* @setandget
*
* @par Example
* \code
*   char buttonHandle[BUF_SIZE];
*   maWidgetGetProperty(radioGroupHandle, MAW_RADIO_GROUP_SELECTED, buttonHandle, BUF_SIZE);
* \endcode
*/
#define MAW_RADIO_GROUP_SELECTED "selected"

/**
* @brief Set or get the number of stars to show.
* Usually, the default stars number is 5.
* @validvalue An int that specifies the number of stars to show.
*
* @setandget
*
* @par Example
* \code
*   maWidgetSetProperty(ratingBarHandle, MAW_RATING_BAR_NUM_STAR, "4");
* \endcode
*/
#define MAW_RATING_BAR_NUM_STAR "numstar"

/**
* @brief Set or get the current rating (number of stars filled).
*
* @validvalue A float that specifies the number of stars filled.
*
* @setandget
* @par Example
* \code
*   maWidgetSetProperty(ratingBarHandle, MAW_RATING_BAR_RATING, "3.0");
* \endcode
*/
#define MAW_RATING_BAR_RATING "rating"

/**
* @brief Set or get the step size (granularity) of this rating bar.
* By default the granularity is 0.5.
* @validvalue A float that specifies the step size.
*
* @setandget
*
* @par Example
* \code
*   maWidgetSetProperty(ratingBarHandle, MAW_RATING_BAR_GRANULARITY, "1.0");
* \endcode
*/
#define MAW_RATING_BAR_GRANULARITY "granularity"

/**
* Road map type (landforms not visible).
*/
#define MAW_MAP_TYPE_ROAD 0

/**
* Sattelite map type (landforms visible).
*/
#define MAW_MAP_TYPE_SATELLITE 1

/**
* @brief The api key used to access the full features of the google map (on Android platform).
* The iOS platform doesn't require a key.
*
* @validvalue A string containing a google maps key. For further details on how to
* obtain these key go to "https://developers.google.com/maps/documentation/android/mapkey".
*
* @setonly
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAW_MAP_API_KEY_GOOGLE, "a_valid_google_key");
* \endcode
*/
#define MAW_MAP_API_KEY_GOOGLE "api_key_google"

/**
* @brief The api key used to access the full features of the bing map (on windows phone platform).
*
* @validvalue A string containing a bing maps key. For further details on how to
* obtain these key go to "http://msdn.microsoft.com/en-us/library/ff428642.aspx".
*
* @setonly
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAW_MAP_API_KEY_BING, "a_valid_bing_key");
* \endcode
*/
#define MAW_MAP_API_KEY_BING "api_key_bing"

/**
* @brief Set or get the map type.
*
* @validvalue One of the two values: MAW_MAP_TYPE_SATELLITE or MAW_MAP_TYPE_ROAD.
*
* @setandget
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAW_MAP_TYPE, MAW_MAP_TYPE_SATELLITE);
*   char mapType[BUF_SIZE];
*   maWidgetGetProperty(mapHandle, MAW_MAP_TYPE, mapType, BUF_SIZE);
* \endcode
*/
#define MAW_MAP_TYPE "type"

/**
* @brief Sets and gets the zoom level of the map.
*
* @validvalue A integer value between 0 and 21.
*
* @setandget
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAW_MAP_ZOOM_LEVEL, "4");
*   maWidgetSetProperty(mapHandle, MAW_MAP_ZOOM_LEVEL);
*   char zoomLevel[BUF_SIZE];
*   maWidgetGetProperty(mapHandle, MAW_MAP_ZOOM_LEVEL, zoomLevel, BUF_SIZE);
* \endcode
*/
#define MAW_MAP_ZOOM_LEVEL "zoom_level"

/**
* @brief Disables/enables the interraction between the user and the map.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @setandget
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAW_MAP_INTERRACTION_ENABLED, "true");
*   char interractionEnabled[BUF_SIZE];
*   maWidgetGetProperty(mapHandle, MAW_MAP_INTERRACTION_ENABLED, interractionEnabled, BUF_SIZE);
* \endcode
*/
#define MAW_MAP_INTERRACTION_ENABLED "interraction_enabled"

/**
* @brief Set the map center latitude coordinate.
*
* @validvalue A double value between -90.0 and 90.0.
*
* @setonly
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAW_MAP_CENTER_LATITUDE, "43.232544");
*   maWidgetSetProperty(mapHandle, MAW_MAP_CENTER_LATITUDE, "-12.42324");
* \endcode
*/
#define MAW_MAP_CENTER_LATITUDE "center_latitude"

/**
* @brief Set the map center longitude coordinate.
*
* @validvalue A double value between -180.0 and 180.0.
*
* @setonly
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAW_MAP_CENTER_LONGITUDE, "80.43352");
*   maWidgetSetProperty(mapHandle, MAW_MAP_CENTER_LONGITUDE, "-54.56442");
* \endcode
*/
#define MAW_MAP_CENTER_LONGITUDE "center_longitude"

/**
* @brief Set the map zoom level value.
*
* @validvalue A double value between 0 and 21.
*
* @setonly
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAW_MAP_CENTER_ZOOM_LEVEL, "12");
*   maWidgetSetProperty(mapHandle, MAW_MAP_CENTER_ZOOM_LEVEL, "3");
* \endcode
*/
#define MAW_MAP_CENTER_ZOOM_LEVEL "center_zoom_level"

/**
 * @brief Property used to center the map.
 *
 * @validvalue A boolean string: "true" or "false".
 *
 * @setonly
 * @par Example
 * \code
 *   maWidgetSetProperty(mapHandle, MAW_MAP_CENTERED, "true"); // centers the map on the already set map center
 * \endcode
 */
#define MAW_MAP_CENTERED "centered"

/**
 * @brief Property used specify the upper left corner latitude of the visible area.
 *
 * @validvalue A double value between -90.0 and 90.0.
 *
 * @setandget
 * @par Example
 * \code
 *   maWidgetSetProperty(mapHandle, MAW_MAP_VISIBLE_AREA_UPPER_LEFT_CORNER_LATITUDE, "-34.34234");
 * \endcode
 */
#define MAW_MAP_VISIBLE_AREA_UPPER_LEFT_CORNER_LATITUDE "visible_area_upper_left_corner_latitude"

/**
 * @brief Property used specify the upper left corner longitude of the visible area.
 *
 * @validvalue A double value between -180.0 and 180.0.
 *
 * @setandget
 * @par Example
 * \code
 *   maWidgetSetProperty(mapHandle, MAW_MAP_VISIBLE_AREA_UPPER_LEFT_CORNER_LONGITUDE, "134.312");
 * \endcode
 */
#define MAW_MAP_VISIBLE_AREA_UPPER_LEFT_CORNER_LONGITUDE "visible_area_upper_left_corner_longitude"

/**
 * @brief Property used specify the lower right corner latitude of the visible area.
 *
 * @validvalue A double value between -90.0 and 90.0.
 *
 * @setandget
 * @par Example
 * \code
 *   maWidgetSetProperty(mapHandle, MAW_MAP_VISIBLE_AREA_LOWER_RIGHT_CORNER_LATITUDE, "43.2322");
 * \endcode
 */
#define MAW_MAP_VISIBLE_AREA_LOWER_RIGHT_CORNER_LATITUDE "visible_area_lower_right_corner_latitude"

/**
 * @brief Property used specify the lower right corner longitude of the visible area.
 *
 * @validvalue A double value between -180.0 and 180.0.
 *
 * @setandget
 * @par Example
 * \code
 *   maWidgetSetProperty(mapHandle, MAW_MAP_VISIBLE_AREA_LOWER_RIGHT_CORNER_LONGITUDE, "-100.2324");
 * \endcode
 */
#define MAW_MAP_VISIBLE_AREA_LOWER_RIGHT_CORNER_LONGITUDE "visible_area_lower_right_corner_longitude"

/**
* @brief Used to center the map on a previously set visible area.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @setonly
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAP_CENTERED_ON_VISIBLE_AREA, "true");
* \endcode
*/
#define MAW_MAP_CENTERED_ON_VISIBLE_AREA "centered_on_visible_area"

/**
* @brief Set the map pin latitude coordinate.
*
* @validvalue A double value between -90.0 and 90.0.
*
* @setonly
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAW_MAP_PIN_LATITUDE, "43.232544");
*   maWidgetSetProperty(mapHandle, MAW_MAP_PIN_LATITUDE, "-12.42324");
* \endcode
*/
#define MAW_MAP_PIN_LATITUDE "latitude"

/**
* @brief Set the map pin longitude coordinate.
*
* @validvalue A double value between -180.0 and 180.0.
*
* @setonly
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAW_MAP_PIN_LONGITUDE, "80.43352");
*   maWidgetSetProperty(mapHandle, MAW_MAP_PIN_LONGITUDE, "-124.56442");
* \endcode
*/
#define MAW_MAP_PIN_LONGITUDE "longitude"

/**
* @brief Set the map pin text.
*
* @validvalue A string value.
*
* @setandget
* @par Example
* \code
*   maWidgetSetProperty(mapHandle, MAW_MAP_PIN_TEXT, "Cluj");
* \endcode
*/
#define MAW_MAP_PIN_TEXT "text"

//End of defines.
/**
* Creates a new widget of the specified type.
*
* \note See \ref WidgetTypes "Widget types" for the available widget types.
*
* \param widgetType A String representing the type of the widget to create.
*
* \returns A handle to the widget, or any of the following result codes:
* - #MAW_RES_ERROR if the widget could not be created.
* - #MAW_RES_INVALID_TYPE_NAME if the widget type was not available.
* - #MAW_RES_FEATURE_NOT_AVAILABLE if the widget type is not supported by the curent framework version.

*/
MAWidgetHandle maWidgetCreate(const char* widgetType);

/**
* Frees the memory and resources held by the given widget. Destryoing a widget
* with children will also cause its children to be destroyed. Once a handle has
* been destroyed it cannot be referenced by the maWidget* functions.
*
* \note If the given widget has a parent, the widget will be removed from its
* parent.
*
* \param widget A handle to the widget to be destroyed.
*
* \returns Any of the following result codes:
* - #MAW_RES_OK if the widget was destroyed.
* - #MAW_RES_INVALID_HANDLE if the handle was invalid.
*/
int maWidgetDestroy(MAWidgetHandle widget);

/**
* Adds a widget to the given parent as a child. Letting the
* parent widget layout the child.
*
* \param parent The widget layout to which the child will be added.
* \param child The widget that will be added to the parent.
*
* \returns Any of the following result codes:
* - #MAW_RES_OK if the child could be added to the parent.
* - #MAW_RES_INVALID_HANDLE if any of the handles were invalid.
* - #MAW_RES_INVALID_LAYOUT if the widget was added to a non-layout.
* - #MAW_RES_CANNOT_INSERT_DIALOG if the child is a modal dialog.
* - #MAW_RES_ERROR if it could not be added for some other reason.
*/
int maWidgetAddChild(MAWidgetHandle parent, MAWidgetHandle child);

/**
* Inserts a widget to the given parent as a child at an index. Letting the
* parent widget layout the child.
*
* \param parent The widget layout in which the child will be inserted.
* \param child The widget that will be added to the parent.
* \param index The index where the widget should be inserted (-1 means last)
*
* \returns Any of the following result codes:
* - #MAW_RES_OK if the child could be added to the parent.
* - #MAW_RES_INVALID_HANDLE if any of the handles were invalid.
* - #MAW_RES_INVALID_INDEX if the index was out of bounds.
* - #MAW_RES_INVALID_LAYOUT if the widget was added to a non-layout.
* - #MAW_RES_CANNOT_INSERT_DIALOG if the child is a modal dialog.
* - #MAW_RES_ERROR if it could not be added for some other reason.
*/
int maWidgetInsertChild(MAWidgetHandle parent, MAWidgetHandle child, int index);

/**
* Removes a child widget from its parent (but does not destroy it).
* Removing a currently visible top-level widget causes the MoSync view to become visible.
*
* \returns Any of the following result codes:
* - #MAW_RES_OK if the child could be removed from the parent.
* - #MAW_RES_INVALID_HANDLE if the handle was invalid.
* - #MAW_RES_ERROR otherwise.
*/
int maWidgetRemoveChild(MAWidgetHandle child);

/**
* Shows a dialog widget.
* \param dialogHandle The handle of the dialog that will be shown.
*
* \returns Any of the following result codes:
* - #MAW_RES_OK if the child could be removed from the parent.
* - #MAW_RES_INVALID_HANDLE if the handle was invalid.
* - #MAW_RES_ERROR otherwise.
*/
int maWidgetModalDialogShow(MAWidgetHandle dialogHandle);

/**
* Hides/Dismisses a currently displayed dialog.
* \param dialogHandle The handle of the dialog that will be hidden.
*
* \returns Any of the following result codes:
* - #MAW_RES_OK if the child could be removed from the parent.
* - #MAW_RES_INVALID_HANDLE if the handle was invalid.
* - #MAW_RES_ERROR otherwise.
*/
int maWidgetModalDialogHide(MAWidgetHandle dialogHandle);

/**
* Shows a screen. If native UI hasn't been initialized, it is also initialized
* and disables regular MoSync drawing.
*
* \param screenHandle The handle to the screen.
*
* \returns Any of the following result codes:
* - #MAW_RES_OK if the screen could be shown.
* - #MAW_RES_INVALID_SCREEN if the \a screenHandle is not a handle to a screen.
*/
int maWidgetScreenShow(MAWidgetHandle screenHandle);

/**
 * Pushes a screen to the given screen stack, hides the current screen and
 * shows the pushed screen it. Pushing it to the stack will make it
 * automatically go back to the previous screen when popped.
 *
 * \param stackScreen A handle to a #MAW_STACK_SCREEN.
 * \param newScreen A handle to either a #MAW_SCREEN or a #MAW_TAB_SCREEN.
 *                  The handle cannot exist in the stack already.
 *
 * \return Any of the following result codes:
 * - #MAW_RES_OK if the given screen could be pushed.
 * - #MAW_RES_INVALID_HANDLE if either the screenStack or newScreen handle
 *                           was invalid.
 * - #MAW_RES_ERROR if something else than a screen stack was passed, or if
 *                  the handle already exists in the stack.
 */
int maWidgetStackScreenPush(MAWidgetHandle stackScreen, MAWidgetHandle newScreen);

/**
 * Pops a screen from a screen stack, hides the current screen and shows
 * the popped screen before the If there is no previous screen in the screen
 * stack, an empty screen will be shown.
 *
 * \param stackScreen A handle to a #MAW_STACK_SCREEN to pop from.
 *
 * \return Any of the following result codes:
 * - #MAW_RES_OK if the given screen could be popped.
 * - #MAW_RES_INVALID_HANDLE if the screen stack does not exist.
 * - #MAW_RES_ERROR if something else than a screen stack was passed.
 */
int maWidgetStackScreenPop(MAWidgetHandle stackScreen);

/**
* Sets a specified property on the given widget.
*
* \param widget Handle to the widget.
* \param property A string representing which property to set.
* \param value The value which will be assigned to the property.
*
* \note May be synchronous or asynchronous depending on the property.
* \note See \ref WidgetProperties "Widget properties" for the available properties.
*
* \returns Any of the following result codes:
* - #MAW_RES_OK if the property could be set.
* - #MAW_RES_INVALID_HANDLE if the handle was invalid.
* - #MAW_RES_INVALID_PROPERTY_NAME if the property name was invalid.
* - #MAW_RES_INVALID_PROPERTY_VALUE if the property value was invalid.
* - #MAW_RES_FEATURE_NOT_AVAILABLE if the property is not supported by the curent framework version.
* - #MAW_RES_ERROR otherwise.
*/
int maWidgetSetProperty(MAWidgetHandle widget, const char* property, const char* value);

/**
* Retrieves a specified property from the given widget.
*
* \param widget Handle to the widget.
* \param property A string representing which property to set.
* \param value A buffer that will hold the value of the property, represented as a string.
* \param bufSize Size of the buffer.
*
* \returns The number of bytes copied on success, or any of the following result codes:
* - #MAW_RES_INVALID_HANDLE if the handle was invalid.
* - #MAW_RES_INVALID_PROPERTY_NAME if the property name was invalid.
* - #MAW_RES_INVALID_PROPERTY_VALUE if the property value was invalid.
* - #MAW_RES_INVALID_STRING_BUFFER_SIZE if the buffer size was to small.
* - #MAW_RES_FEATURE_NOT_AVAILABLE if the property is not supported by the curent framework version.
* - #MAW_RES_ERROR otherwise.
*/
int maWidgetGetProperty(MAWidgetHandle widget, const char* property, char* value, int bufSize);

/**
* Add an item to the Options Menu associated to a screen.
* Available on Android and WP7.
* The options menu is where you should include actions and other options that are relevant to the current activity
* context, such as "Search," "Compose email," or "Settings".
* When opened, the first visible portion is the icon menu, which holds up to six menu items.
* If your menu includes more than six items, Android places the sixth item and the rest into the overflow menu,
* which the user can open by selecting More. Those items do not display icons.
* \param widget Handle to the screen widget.
* \param title The title associated for the new item. Can be left null.
* \param iconPath The path to an image or  a predefined icon, one of the \link #MAW_OPTIONS_MENU_ICON_CONSTANT_ADD \endlink constants.
* Note that for Windows phone 7 the option menu icons must be added under the following folder
* structure "/ApplicationBarIcons/". The function is called with the name of the icon file.
* e.g. maWidgetScreenAddOptionsMenuItem(ScreenHandle, "test", "optionsMenuItemIcon.png", 0); where the
* file optionsMenuItemIcon.png is found in the folder "/ApplicationBarIcons".
* Can be left null. On windows phone 7 a null icon means that the item
* will be a part of the extendable menu item list from the native Application Bar.
* \iconPredefined Specifies if the icon is a project resource, or one of the predefined Android icons.
* By default it's value is 0.
*
* \returns The the item index on success, or any of the following result codes:
* - #MAW_RES_ERROR
* - #MAW_RES_INVALID_HANDLE
*/
int maWidgetScreenAddOptionsMenuItem(MAWidgetHandle widget, const char* title, const char* iconPath, int iconPredefined);

// End of IOCtls.
