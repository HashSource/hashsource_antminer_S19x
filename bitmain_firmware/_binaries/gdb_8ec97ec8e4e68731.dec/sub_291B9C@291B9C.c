int __fastcall sub_291B9C(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r6
  int v8; // r4
  _DWORD *v9; // r4
  _BYTE *v10; // r0
  int v11; // r1
  void *v12; // r4
  int v14; // r0

  v6 = sub_2978A8(a1);
  v7 = v6;
  if ( a3 > 0 )
  {
    v8 = 0;
    do
    {
      ++v8;
      v6 = sub_297958(v6);
    }
    while ( a3 != v8 );
  }
  v9 = (_DWORD *)sub_297958(v6);
  v10 = (_BYTE *)sub_2978B8(v7);
  if ( v9 && (v10 = (_BYTE *)sub_298D24(a1, a1, *v9), (v12 = v10) != 0) )
  {
    if ( *v10 )
    {
      sub_2926F8(v10);
      sub_296944(dword_4900D8);
      if ( !dword_46DED4 )
      {
        sub_281E80(1, a2);
        sub_294F3C(&word_3E1F84);
      }
      sub_294F3C(v12);
      v14 = sub_297758(v12);
      sub_292748(v14);
      return 0;
    }
    else
    {
      sub_2945C8(v10, v11);
      free(v12);
      return -1;
    }
  }
  else
  {
    sub_2945C8(v10, v11);
    return -1;
  }
}
