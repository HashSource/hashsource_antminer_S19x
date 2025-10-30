int __fastcall sub_12A71C(_DWORD *a1, int *a2)
{
  unsigned int v2; // r3
  int v3; // r3
  int v5; // r2
  int v6; // r1
  int result; // r0
  int *v8; // [sp+Ch] [bp-18h] BYREF
  int v9; // [sp+10h] [bp-14h] BYREF
  int v10; // [sp+18h] [bp-Ch]
  int v11; // [sp+1Ch] [bp-8h]

  v8 = &v9;
  if ( !a2 )
    return -1;
  v2 = a2[1];
  if ( v2 > 0x1E )
    return -1;
  v3 = *((char *)&word_1CA6D0[128] + v2);
  if ( v3 == -1 )
    return -1;
  v5 = *a2;
  v6 = a2[2];
  v10 = 0;
  v9 = 0;
  v11 = 0;
  result = sub_1714AC(&v8, v6, v5, v3 | 0x1000, 0x2000);
  if ( result >= 0 )
  {
    result = v9;
    *a1 = v10;
  }
  return result;
}
