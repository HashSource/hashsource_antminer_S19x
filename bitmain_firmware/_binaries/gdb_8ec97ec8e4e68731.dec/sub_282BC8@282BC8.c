int __fastcall sub_282BC8(int a1, int a2)
{
  bool v2; // zf
  _DWORD *v4; // r4
  int v5; // r2
  int v6; // r3
  int v8; // r6
  int v9; // r0
  int v10; // r0

  v2 = a2 == 44;
  if ( a2 != 44 )
    v2 = a2 == 59;
  LOWORD(v4) = (unsigned __int16)dword_48AB10;
  if ( v2 )
  {
    HIWORD(v4) = (unsigned int)dword_48AB10 >> 16;
    v5 = v4[41];
    if ( v5 )
    {
      v6 = v4[31];
      if ( v6 )
      {
        if ( a2 != 59 )
          v5 = -v5;
        v4[32] = v5;
        return sub_296630(a1, v5, &unk_48AB7C, v6);
      }
    }
    return -1;
  }
  if ( a2 == 84 )
  {
    HIWORD(v4) = (unsigned int)dword_48AB10 >> 16;
    v4[32] = -1;
    v4[41] = -1;
    goto LABEL_16;
  }
  if ( a2 <= 84 )
  {
    if ( a2 == 70 )
    {
      HIWORD(v4) = (unsigned int)dword_48AB10 >> 16;
      v4[32] = -2;
      v4[41] = -2;
      goto LABEL_16;
    }
  }
  else
  {
    if ( a2 == 102 )
    {
      HIWORD(v4) = (unsigned int)dword_48AB10 >> 16;
      v8 = v4[34];
      v4[32] = 2;
      v4[41] = 2;
      if ( v8 )
        goto LABEL_17;
      goto LABEL_19;
    }
    if ( a2 == 116 )
    {
      HIWORD(v4) = (unsigned int)dword_48AB10 >> 16;
      v4[32] = 1;
      v4[41] = 1;
      goto LABEL_16;
    }
  }
  HIWORD(v4) = (unsigned int)dword_48AB10 >> 16;
LABEL_16:
  v8 = v4[34];
  if ( v8 )
  {
LABEL_17:
    v6 = v4[31];
    v5 = v4[32];
    return sub_296630(a1, v5, &unk_48AB7C, v6);
  }
LABEL_19:
  if ( (dword_48AAA0 & 0x80000) == 0 )
  {
    v9 = sub_2934C8(&unk_48AB7C, 16);
    v6 = v9;
    if ( v9 > 0 )
    {
      v5 = v4[32];
      v4[31] = v9;
      return sub_296630(a1, v5, &unk_48AB7C, v6);
    }
    return -1;
  }
  v10 = sub_293AC4(a1);
  *(_DWORD *)(v10 + 4) = v4[32];
  dword_48BAA4 = v10;
  off_48BAA0 = sub_280424;
  return v8;
}
