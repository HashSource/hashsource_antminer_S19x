__int64 sub_9B510()
{
  int v0; // r5
  int v1; // r0
  int v2; // r4
  __int64 v3; // r0
  __int64 v5; // [sp+8h] [bp-Ch] BYREF

  v0 = sub_26EA24();
  v1 = sub_26BC70(v0);
  v2 = v1;
  if ( v1 )
  {
    switch ( **(_BYTE **)(v1 + 24) )
    {
      case 5:
      case 8:
      case 0xC:
      case 0x15:
        v3 = sub_26EB1C(v0);
        if ( !sub_1707CC(v2, HIDWORD(v3), v3, HIDWORD(v3), &v5) )
          sub_946E0("enumeration value is invalid: can't find 'POS");
        return v5;
      default:
        break;
    }
  }
  sub_946E0("'POS only defined on discrete types");
}
