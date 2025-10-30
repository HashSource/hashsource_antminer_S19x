int __fastcall sub_2849A0(int a1, int a2, int a3, int a4)
{
  int *v5; // r12
  int v6; // r4
  _BYTE *v7; // r3
  int v8; // r1
  _BYTE *v10; // r1
  int v11; // r6
  int v12; // r0
  int v13; // r3
  _BYTE v14[4]; // [sp+4h] [bp-6Ch] BYREF
  _BYTE v15[16]; // [sp+8h] [bp-68h] BYREF
  int v16; // [sp+18h] [bp-58h]
  _BYTE vars0[16]; // [sp+70h] [bp+0h] BYREF

  if ( a3 )
  {
    LOWORD(v5) = (unsigned __int16)&dword_48ACB4;
    if ( dword_4900D8 )
    {
      HIWORD(v5) = (unsigned int)&dword_48ACB4 >> 16;
      if ( v5[1] )
      {
        v6 = 1;
        a3 = 0;
      }
      else if ( *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8 - 1) == a3 )
      {
        a3 = v5[1];
        v6 = 1;
      }
      else
      {
        v14[0] = a3;
        v6 = 2;
        a3 = 1;
      }
    }
    else
    {
      a3 = 0;
      HIWORD(v5) = (unsigned int)&dword_48ACB4 >> 16;
      v6 = 1;
    }
  }
  else
  {
    v5 = &dword_48ACB4;
    v6 = 1;
  }
  if ( a2 )
  {
    v7 = &vars0[a3];
    a3 = v6++;
    *(v7 - 108) = a2;
  }
  else if ( !v5[2] && dword_470740 )
  {
    v10 = &vars0[a3];
    a3 = v6;
    *(v10 - 108) = dword_470740;
    ++v6;
  }
  v8 = v5[3];
  v14[a3] = 0;
  if ( v8 )
  {
    v11 = sub_29B910(a1);
    if ( a4 && !dword_4900EC )
      v12 = _lxstat64(3, v11, v15);
    else
      v12 = _xstat64(3, v11, v15);
    if ( v12 )
      goto LABEL_25;
    v13 = v16 & 0xF000;
    if ( v13 != 0x4000 )
    {
      if ( v13 == 40960 && !_xstat64(3, v11, v15) && (v16 & 0xF000) == 0x4000 )
        goto LABEL_27;
LABEL_25:
      if ( dword_4900D8 == dword_4900DC )
        sub_294F3C(v14);
      goto LABEL_27;
    }
    if ( dword_470744 )
    {
      if ( !dword_4900D8 || *(_BYTE *)(dword_48AAD4 + dword_4900D8) )
      {
        if ( *(_BYTE *)(dword_48AAD4 + dword_4900D8) == 47 )
          goto LABEL_27;
        goto LABEL_33;
      }
      if ( *(_BYTE *)(dword_48AAD4 + dword_4900D8 - 1) != 47 )
LABEL_33:
        sub_294F3C(&word_398974);
    }
LABEL_27:
    sub_297758(v11);
    return v6;
  }
  if ( dword_4900D8 == dword_4900DC )
    sub_294F3C(v14);
  return v6;
}
