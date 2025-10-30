int __fastcall sub_20AB0(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2; // r0
  unsigned int v3; // r0
  const char *v4; // r3
  unsigned int v8; // [sp+10h] [bp-864h] BYREF
  unsigned int v9; // [sp+30h] [bp-844h] BYREF
  char v10[4]; // [sp+50h] [bp-824h] BYREF
  void *v11; // [sp+850h] [bp-24h]
  void *ptr; // [sp+854h] [bp-20h]
  unsigned int v13; // [sp+858h] [bp-1Ch]
  unsigned int v14; // [sp+85Ch] [bp-18h]
  unsigned int *v15; // [sp+860h] [bp-14h]
  unsigned int *v16; // [sp+864h] [bp-10h]
  int i; // [sp+868h] [bp-Ch]
  unsigned __int8 v18; // [sp+86Fh] [bp-5h]

  v16 = a1;
  v15 = a2;
  v18 = 1;
  for ( i = 7; i >= 0; --i )
  {
    sub_1F008();
    v14 = v2;
    sub_1F008();
    v13 = v3;
    if ( v14 > v3 )
    {
      v18 = 0;
      break;
    }
    if ( v14 < v13 )
    {
      v18 = 1;
      break;
    }
  }
  if ( byte_865D0 )
  {
    sub_1F304(&v8, a1);
    sub_1F304(&v9, a2);
    ptr = sub_1FE6C((int)&v8, 32);
    v11 = sub_1FE6C((int)&v9, 32);
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      if ( v18 )
        v4 = "YES (hash <= target)";
      else
        v4 = "no (false positive; hash > target)";
      snprintf(v10, 0x800u, " Proof: %s\nTarget: %s\nTrgVal? %s", (const char *)ptr, (const char *)v11, v4);
      sub_1DB6C(7, v10, 0);
    }
    free(ptr);
    free(v11);
  }
  return v18;
}
