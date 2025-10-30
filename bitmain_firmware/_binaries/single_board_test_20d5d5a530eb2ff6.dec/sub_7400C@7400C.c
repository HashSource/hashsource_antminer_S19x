void sub_7400C()
{
  bool v0; // cc
  int v1; // [sp+8h] [bp-82Ch] BYREF
  __int16 v2; // [sp+Ch] [bp-828h]
  _DWORD s[8]; // [sp+10h] [bp-824h] BYREF
  char v4[2052]; // [sp+30h] [bp-804h] BYREF

  v0 = (unsigned int)dword_65E468 > 0x62;
  if ( dword_65E468 != 98 )
    v0 = (unsigned int)(dword_65E468 - 100) > 2;
  if ( !v0 )
  {
    v1 = 134523477;
    v2 = 2052;
    memset(s, 0, sizeof(s));
    if ( sub_73C90(dword_65E460, (unsigned __int8 *)&v1, 6u, (unsigned __int8 *)s, 0xAu) )
    {
      strcpy(v4, "Get ac power failed\n");
      nullsub_8();
    }
    else
    {
      *(_DWORD *)v4 = s[1];
    }
  }
}
