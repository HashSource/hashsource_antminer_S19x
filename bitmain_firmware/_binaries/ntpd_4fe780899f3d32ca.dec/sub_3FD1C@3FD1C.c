int __fastcall sub_3FD1C(int a1, int a2)
{
  int v2; // r5
  _DWORD *v3; // r11
  int v5; // r8
  int v6; // r4
  unsigned int v7; // r2
  int v8; // r1
  int v9; // r12
  char *v10; // r0
  char v11; // r2
  char v12; // t1
  char v13; // t1
  unsigned int v14; // r2
  char v16; // [sp+Bh] [bp-19h] BYREF
  _BYTE s1[16]; // [sp+Ch] [bp-18h] BYREF

  v2 = restrictlist6;
  if ( !restrictlist6 )
    return 0;
  v3 = *(_DWORD **)restrictlist6;
  if ( restrictlist6 == *(_DWORD *)restrictlist6 )
LABEL_18:
    sub_6ECC0("ntp_restrict.c", 381, 2, "next != res");
  v5 = a1 - 1;
  v6 = a1 + 15;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v2 + 16);
    if ( v7 && v7 <= current_time )
      sub_3FAA4((int *)v2, 1);
    v8 = v5;
    v9 = v2 + 35;
    v10 = &v16;
    do
    {
      v12 = *(_BYTE *)++v8;
      v11 = v12;
      v13 = *(_BYTE *)++v9;
      *++v10 = v11 & v13;
    }
    while ( v8 != v6 );
    if ( !memcmp(s1, (const void *)(v2 + 20), 0x10u) )
    {
      v14 = ((*(unsigned __int16 *)(v2 + 10) ^ 0x2000u) >> 13) & 1;
      if ( a2 == 123 )
        v14 = 1;
      if ( v14 )
        return v2;
    }
    if ( !v3 )
      return 0;
    v2 = (int)v3;
    if ( v3 == (_DWORD *)*v3 )
      goto LABEL_18;
    v3 = (_DWORD *)*v3;
  }
}
