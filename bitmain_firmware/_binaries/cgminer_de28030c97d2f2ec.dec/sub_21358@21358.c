int __fastcall sub_21358(unsigned int *a1, unsigned int *a2)
{
  const char *v2; // r3
  unsigned int v5; // [sp+10h] [bp-864h] BYREF
  unsigned int v6; // [sp+30h] [bp-844h] BYREF
  char v7[4]; // [sp+50h] [bp-824h] BYREF
  void *v8; // [sp+850h] [bp-24h]
  void *ptr; // [sp+854h] [bp-20h]
  unsigned int v10; // [sp+858h] [bp-1Ch]
  unsigned int v11; // [sp+85Ch] [bp-18h]
  unsigned int *v12; // [sp+860h] [bp-14h]
  unsigned int *v13; // [sp+864h] [bp-10h]
  int i; // [sp+868h] [bp-Ch]
  unsigned __int8 v15; // [sp+86Fh] [bp-5h]

  v13 = a1;
  v12 = a2;
  v15 = 1;
  for ( i = 7; i >= 0; --i )
  {
    v11 = v13[i];
    v10 = v12[i];
    if ( v11 > v10 )
    {
      v15 = 0;
      break;
    }
    if ( v11 < v10 )
    {
      v15 = 1;
      break;
    }
  }
  if ( byte_87768 )
  {
    sub_1FC08(&v5, a1);
    sub_1FC08(&v6, a2);
    ptr = sub_20744((int)&v5, 32);
    v8 = sub_20744((int)&v6, 32);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      if ( v15 )
        v2 = "YES (hash <= target)";
      else
        v2 = "no (false positive; hash > target)";
      snprintf(v7, 0x800u, " Proof: %s\nTarget: %s\nTrgVal? %s", (const char *)ptr, (const char *)v8, v2);
      sub_1E4EC(7, v7, 0);
    }
    free(ptr);
    free(v8);
  }
  return v15;
}
