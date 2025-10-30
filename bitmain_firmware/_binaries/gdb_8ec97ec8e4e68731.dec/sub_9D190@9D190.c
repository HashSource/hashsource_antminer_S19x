char *__fastcall sub_9D190(const char *a1, int a2, char *a3)
{
  unsigned int v6; // r0
  char *v8; // r5
  char *v9[2]; // [sp+8h] [bp-8h] BYREF

  v6 = sub_9AE80(a1, (int)a3);
  if ( v6 )
    return *(char **)(*(_DWORD *)v6 + 8);
  sub_21D618(v9, a1, a2, a3, 2, 0);
  v8 = v9[0];
  sub_9AF2C(a1, a3, v9[0], v9[1]);
  return v8;
}
