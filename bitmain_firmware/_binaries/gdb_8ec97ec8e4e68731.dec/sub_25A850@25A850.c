void __fastcall sub_25A850(int a1, _BYTE *a2, int a3, int a4)
{
  char **v7; // r0
  _BYTE *v8; // r0
  void *v9; // r6

  if ( a2 )
  {
    if ( dword_46D448 && (v7 = sub_194438(a3), v8 = (_BYTE *)sub_1944B0((int)v7, (int)a2, a4), (v9 = v8) != 0) )
    {
      sub_259C24(v8, a1);
      free(v9);
    }
    else
    {
      sub_259C24(a2, a1);
    }
  }
}
