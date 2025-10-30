int __fastcall sub_32FE4(int a1)
{
  double v1; // d0
  int v3; // r5
  int v4; // r5
  double v6; // r0
  int v7; // r2
  int v8; // r0
  char *v9; // r0

  if ( *(_BYTE *)(a1 + 91) == 3 || (v3 = *(unsigned __int8 *)(a1 + 93), v3 < sys_floor) )
  {
    v4 = 512;
    if ( (*(_DWORD *)(a1 + 68) & 8) != 0 )
      goto LABEL_4;
  }
  else
  {
    if ( v3 < sys_ceiling )
      v4 = 0;
    else
      v4 = 512;
    if ( (*(_DWORD *)(a1 + 68) & 8) != 0 )
    {
LABEL_4:
      if ( *(unsigned __int8 *)(a1 + 93) <= 1u )
        goto LABEL_5;
      goto LABEL_16;
    }
  }
  sub_32F28();
  LODWORD(v6) = *(unsigned __int8 *)(a1 + 64);
  ldexp(v6, v7);
  if ( v1 >= sys_maxdist + 1.0 * clock_phi )
    v4 |= 0x400u;
  if ( *(unsigned __int8 *)(a1 + 93) > 1u )
  {
LABEL_16:
    v8 = *(_DWORD *)(a1 + 56);
    if ( !v8 || (*(_DWORD *)(v8 + 144) & 0x100) != 0 )
    {
      v9 = sub_178F8((const struct sockaddr *)(a1 + 16));
      if ( v9 && *(_DWORD *)(a1 + 112) == *((_DWORD *)v9 + 38) )
        v4 |= 0x800u;
    }
    else if ( *(_DWORD *)(a1 + 112) == *(_DWORD *)(v8 + 152) )
    {
      v4 |= 0x800u;
    }
  }
LABEL_5:
  if ( !*(_BYTE *)(a1 + 298) || (*(_DWORD *)(a1 + 68) & 0x200) != 0 )
    v4 |= 0x1000u;
  *(_DWORD *)(a1 + 300) = *(_DWORD *)(a1 + 300) & 0xFFFFE1FF | v4;
  return v4;
}
