_DWORD *__fastcall sub_2A67B8(int a1, int a2)
{
  _UNKNOWN **v2; // r12
  _DWORD *v3; // r2
  _DWORD *v4; // r3
  _DWORD *v6; // t1

  v2 = &off_4115C0;
  v3 = &unk_41D3CC;
LABEL_2:
  v4 = v3;
  while ( v4[3] != a1 || v4[4] != a2 && (a2 || !v4[8]) )
  {
    v4 = (_DWORD *)v4[12];
    if ( !v4 )
    {
      v6 = v2[1];
      ++v2;
      v3 = v6;
      if ( v6 )
        goto LABEL_2;
      return v4;
    }
  }
  return v4;
}
