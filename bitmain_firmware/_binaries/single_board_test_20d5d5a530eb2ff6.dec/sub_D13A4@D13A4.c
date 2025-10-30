signed int __fastcall sub_D13A4(int (__fastcall *a1)(char *, size_t, int), int a2)
{
  const char *v3; // r3
  size_t v4; // r0
  signed int result; // r0
  pthread_t v6; // [sp+14h] [bp-18h]
  const char *v8; // [sp+20h] [bp-Ch] BYREF
  const char *v9; // [sp+24h] [bp-8h] BYREF
  int v10; // [sp+28h] [bp-4h] BYREF
  int v11; // [sp+2Ch] [bp+0h] BYREF
  char v12[256]; // [sp+30h] [bp+4h] BYREF
  char v13[4100]; // [sp+130h] [bp+104h] BYREF

  v6 = sub_10C5DC();
  do
  {
    result = sub_D04A4(&v8, &v10, &v9, &v11);
    if ( !result )
      break;
    sub_CF908(result, v12, 0x100u);
    v3 = &byte_1A4198;
    if ( (v11 & 2) != 0 )
      v3 = v9;
    sub_B5560(v13, 0x1000u, "%lu:%s:%s:%d:%s\n", v6, v12, v8, v10, v3);
    v4 = strlen(v13);
    result = a1(v13, v4, a2);
  }
  while ( result > 0 );
  return result;
}
