int __fastcall sub_40AF4(int a1, int a2)
{
  int v2; // r5
  _DWORD *v3; // r11
  int v4; // r7
  int v5; // r4
  unsigned int v7; // r3
  int v8; // r0
  int v9; // r2
  _BYTE *v10; // r1
  char v11; // r3
  char v12; // t1
  char v13; // t1
  unsigned int v14; // r3
  _BYTE s1[16]; // [sp+4h] [bp-18h] BYREF

  v2 = restrictlist6;
  if ( !restrictlist6 )
    return 0;
  v3 = *(_DWORD **)restrictlist6;
  if ( restrictlist6 == *(_DWORD *)restrictlist6 )
LABEL_19:
    sub_6FC54("ntp_restrict.c", 381, 2, "next != res");
  v4 = a1 - 1;
  v5 = a1 + 15;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v2 + 16);
    if ( v7 && v7 <= current_time )
      sub_40820(v2, 1);
    v8 = v2 + 35;
    v9 = v4;
    v10 = s1;
    do
    {
      v12 = *(_BYTE *)++v9;
      v11 = v12;
      v13 = *(_BYTE *)++v8;
      *v10++ = v11 & v13;
    }
    while ( v9 != v5 );
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
    if ( (_DWORD *)*v3 == v3 )
      goto LABEL_19;
    v3 = (_DWORD *)*v3;
  }
}
