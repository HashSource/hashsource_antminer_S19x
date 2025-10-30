int sub_627FC()
{
  int result; // r0
  unsigned __int8 v1[32]; // [sp+Ch] [bp-840h] BYREF
  char v2[2052]; // [sp+2Ch] [bp-820h] BYREF
  int v3; // [sp+830h] [bp-1Ch] BYREF
  __int16 v4; // [sp+834h] [bp-18h]
  int v5; // [sp+838h] [bp-14h]
  __int16 v6; // [sp+83Eh] [bp-Eh]
  int v7; // [sp+840h] [bp-Ch]
  int i; // [sp+844h] [bp-8h]

  v7 = 0;
  result = sub_6197C();
  if ( result )
  {
    v3 = 134523477;
    v4 = 2052;
    memset(v1, 0, sizeof(v1));
    v6 = 0;
    result = sub_61724(dword_536348, (unsigned __int8 *)&v3, 6u, v1, 0xAu);
    v5 = result;
    if ( result )
    {
      strcpy(v2, "Get ac power failed\n");
      return sub_3B6AC(3, v2, 0, (int)v2);
    }
    else
    {
      for ( i = 0; i <= 3; ++i )
        v2[i + 2048] = v1[i + 4];
    }
  }
  return result;
}
