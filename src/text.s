.export _text

_text: .asciiz "Hello world!"

.export _x
_x:
	.byte	$01
	.byte	$00
	.byte	$01
	.byte	$00