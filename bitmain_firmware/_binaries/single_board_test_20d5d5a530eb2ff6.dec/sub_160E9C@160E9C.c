int __fastcall sub_160E9C(int a1, const char *a2, size_t *a3)
{
  int *v4; // r0
  int *v5; // r5
  int v6; // r4
  int v8; // [sp+4h] [bp-8h] BYREF

  v8 = 0;
  v4 = sub_160A70(a1, a2, a3, -1);
  if ( !v4 )
    return 0;
  v5 = v4;
  while ( 1 )
  {
    v6 = sub_160E7C(&v8, v5);
    if ( v6 != -1 )
      break;
    if ( !sub_B6708(a1, 8) )
    {
      sub_1608E0((int)v5);
      return v8;
    }
  }
  sub_1608E0((int)v5);
  if ( !v6 )
    return 0;
  return v8;
}
