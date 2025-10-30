int sub_73F78()
{
  bool v0; // cc
  int v2; // [sp+8h] [bp-82Ch] BYREF
  __int16 v3; // [sp+Ch] [bp-828h]
  unsigned __int8 s[32]; // [sp+10h] [bp-824h] BYREF
  char v5[2052]; // [sp+30h] [bp-804h] BYREF

  v0 = (unsigned int)dword_65E468 > 0x62;
  if ( dword_65E468 != 98 )
    v0 = (unsigned int)(dword_65E468 - 100) > 2;
  if ( v0 )
    return -1;
  v2 = 84191829;
  v3 = 1284;
  memset(s, 0, sizeof(s));
  if ( sub_73C90(dword_65E460, (unsigned __int8 *)&v2, 6u, s, 8u) )
  {
    strcpy(v5, "power 0x05 cmd failed\n");
    nullsub_8();
    return -1;
  }
  return s[4] == 1;
}
