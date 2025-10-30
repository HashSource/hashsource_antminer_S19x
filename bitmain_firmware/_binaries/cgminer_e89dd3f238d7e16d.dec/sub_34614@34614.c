void __fastcall sub_34614(int a1, int a2, int a3)
{
  _BYTE *v3; // r0
  unsigned int v7; // [sp+1Ch] [bp-18h]
  unsigned int v8; // [sp+24h] [bp-10h]
  int v9; // [sp+2Ch] [bp-8h]

  v9 = *(_DWORD *)(a1 + 340);
  sub_30DA0((void **)a1);
  sub_2AF08((void *)a1, (const void *)a2, 0x1C0u, "cgminer.c", "_copy_work", 5014);
  *(_DWORD *)(a1 + 340) = v9;
  if ( *(_DWORD *)(a2 + 288) )
    *(_DWORD *)(a1 + 288) = strdup(*(const char **)(a2 + 288));
  if ( *(_DWORD *)(a2 + 320) )
    *(_DWORD *)(a1 + 320) = strdup(*(const char **)(a2 + 320));
  if ( *(_DWORD *)(a2 + 308) )
  {
    if ( a3 )
    {
      v7 = sub_2CD98(*(_DWORD *)(a1 + 68)) + a3;
      *(_DWORD *)(a1 + 68) = sub_2CD98(v7);
      v3 = sub_34590(*(unsigned __int8 **)(a2 + 308), a3);
    }
    else
    {
      v3 = strdup(*(const char **)(a2 + 308));
    }
    *(_DWORD *)(a1 + 308) = v3;
  }
  else if ( a3 )
  {
    v8 = sub_2CD98(*(_DWORD *)(a1 + 68)) + a3;
    *(_DWORD *)(a1 + 68) = sub_2CD98(v8);
  }
  if ( *(_DWORD *)(a2 + 328) )
    *(_DWORD *)(a1 + 328) = strdup(*(const char **)(a2 + 328));
  *(_DWORD *)(a1 + 444) = *(_DWORD *)(a2 + 444);
}
