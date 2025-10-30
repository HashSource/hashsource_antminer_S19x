_DWORD *__fastcall sub_2A657C(int a1)
{
  _UNKNOWN **v1; // r6
  _DWORD *v2; // r4
  _DWORD *v4; // r3
  _DWORD *v5; // t1

  v1 = &off_4115C0;
  v2 = &unk_41D3CC;
  while ( !((int (__fastcall *)(_DWORD *, int))v2[10])(v2, a1) )
  {
    v2 = (_DWORD *)v2[12];
    if ( !v2 )
    {
      v5 = v1[1];
      ++v1;
      v4 = v5;
      if ( !v5 )
        return v2;
      v2 = v4;
    }
  }
  return v2;
}
