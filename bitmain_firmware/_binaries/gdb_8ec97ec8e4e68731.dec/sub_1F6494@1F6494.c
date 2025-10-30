int __fastcall sub_1F6494(const char *a1)
{
  int v1; // r4
  int v3; // r5
  int v4; // r3
  int v5; // r6
  int v6; // r7
  int v7; // r3
  int *v8; // r2
  char *v9; // r0
  int v10; // r5
  char *v11; // r1
  char *v12; // r3
  int v13; // [sp+0h] [bp-94h] BYREF
  const char *v14; // [sp+4h] [bp-90h] BYREF
  int v15; // [sp+8h] [bp-8Ch] BYREF
  int v16; // [sp+Ch] [bp-88h] BYREF
  __int64 v17[2]; // [sp+10h] [bp-84h] BYREF
  int v18; // [sp+20h] [bp-74h]

  v14 = a1;
  if ( sub_1F6110(&v14, &v15, &v16) )
    return sub_1F61A4(-1, 5);
  v1 = sub_1F5F94(&v14, v17);
  if ( v1 )
    return sub_1F61A4(-1, 5);
  if ( (v17[0] & 0x200) != 0 )
    v1 = 64;
  if ( (v17[0] & 0x800) != 0 )
    v1 |= 0x80u;
  if ( (v17[0] & 0x400) != 0 )
    v1 |= 0x200u;
  if ( (v17[0] & 8) != 0 )
    v1 |= 0x400u;
  if ( (v17[0] & 1) != 0 )
    v1 |= 1u;
  if ( (v17[0] & 2) != 0 )
    v1 |= 2u;
  if ( sub_1F5F94(&v14, v17) )
    return sub_1F61A4(-1, 5);
  sub_1F5F0C(v17[0], 1);
  v3 = sub_230020(v15, &v13, v16);
  if ( v3 )
    return sub_1F61A4(-1, 5);
  if ( _xstat64(3, &v13, v17) )
    goto LABEL_23;
  v4 = v18 & 0xF000;
  if ( v4 == 0x8000 )
    goto LABEL_23;
  if ( v4 != 0x4000 )
    return sub_1F61A4(-1, 19);
  if ( (v1 & 3) != 0 )
    return sub_1F61A4(-1, 21);
LABEL_23:
  v5 = sub_967B4((int)&v13, v1);
  if ( v5 >= 0 )
  {
    v6 = dword_489350;
    if ( dword_489350 <= 0 )
    {
      if ( dword_48934C )
      {
LABEL_29:
        dword_489350 += 10;
        v9 = (char *)sub_93050((void *)dword_48934C, 4 * (v6 + 10));
        v10 = dword_489350;
        dword_48934C = (int)v9;
        if ( v6 < dword_489350 )
        {
          v11 = &v9[4 * dword_489350];
          v12 = &v9[4 * v6];
          do
          {
            *(_DWORD *)v12 = -1;
            v12 += 4;
          }
          while ( v11 != v12 );
        }
        v3 = v10 - 10;
        v8 = (int *)&v9[4 * v3];
        goto LABEL_33;
      }
      sub_1F6370();
      v3 = 3;
      v8 = (int *)(dword_48934C + 12);
    }
    else
    {
      if ( *(_DWORD *)dword_48934C != -1 )
      {
        v7 = dword_48934C + 4;
        while ( 1 )
        {
          ++v3;
          v8 = (int *)v7;
          v7 += 4;
          if ( v3 == dword_489350 )
            goto LABEL_29;
          if ( *v8 == -1 )
            goto LABEL_33;
        }
      }
      v8 = (int *)dword_48934C;
    }
LABEL_33:
    *v8 = v5;
    return sub_1F61A4(v3, 0);
  }
  return sub_1F6474();
}
