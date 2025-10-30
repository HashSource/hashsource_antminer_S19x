int __fastcall sub_33534(int a1)
{
  double v1; // d0
  int v3; // r2
  int v4; // r5
  int v5; // r0
  double v7; // r0
  int v8; // r2

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
      goto LABEL_4;
  }
  sub_33478();
  LODWORD(v7) = *(unsigned __int8 *)(a1 + 64);
  ldexp(v7, v8);
  if ( v1 >= sys_maxdist + 1.0 * clock_phi )
    v4 |= 0x400u;
LABEL_4:
  if ( *(unsigned __int8 *)(a1 + 93) > 1u
    && ((v5 = *(_DWORD *)(a1 + 56)) != 0 && (*(_DWORD *)(v5 + 144) & 0x100) == 0
     || (v5 = sub_17B78((const struct sockaddr *)(a1 + 16))) != 0)
    && *(_DWORD *)(a1 + 112) == *(_DWORD *)(v5 + 152) )
  {
    v4 |= 0x800u;
  }
  if ( !*(_BYTE *)(a1 + 298) || (*(_DWORD *)(a1 + 68) & 0x200) != 0 )
    v4 |= 0x1000u;
  *(_DWORD *)(a1 + 300) = v4 | *(_DWORD *)(a1 + 300) & 0xFFFFE1FF;
  return v4;
}
