int sub_1782C()
{
  int v0; // r4
  int v1; // r7
  void *v2; // r9
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_A05EC || (dword_A05EC = (int)calloc(0x64u, 1u)) != 0 )
  {
    v0 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * v0 + 4) == 1 )
      {
        v1 = dword_A05EC;
        if ( !*(_DWORD *)(dword_A05EC + 4 * v0) )
        {
          v2 = malloc(0x100u);
          *(_DWORD *)(v1 + 4 * v0) = v2;
          if ( !v2 )
            break;
        }
      }
      if ( ++v0 == 16 )
        return 0;
    }
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(v4, 0x800u, "No memory for configuraion for chain %d.\n", v0);
      sub_47AB4(3, v4, 0);
    }
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v4, "No memory for configuraion.\n");
    sub_47AB4(3, v4, 0);
  }
  sub_177D8();
  return -1;
}
