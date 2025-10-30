void __fastcall sub_153A4C(int a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  int v4; // r0
  void (__fastcall *v5)(_DWORD *); // r3

  LOWORD(v2) = (unsigned __int16)&off_487664;
  if ( a1 )
  {
    HIWORD(v2) = (unsigned int)&off_487664 >> 16;
    v4 = a2[15];
    v2[1] = v2[10];
    sub_152E2C(v4);
    if ( (_DWORD *)v2[10] == a2 )
    {
      sub_259858("error detected on stdin\n");
      sub_4EFCC(0, 0);
    }
    sub_243120(a2);
    sub_349268(a2);
  }
  else
  {
    HIWORD(v2) = (unsigned int)&off_487664 >> 16;
    v2[1] = a2;
    sub_258BD4(0);
    do
    {
      v5 = (void (__fastcall *)(_DWORD *))a2[5];
      v2[11] = 0;
      v5(a2);
    }
    while ( v2[11] );
  }
}
