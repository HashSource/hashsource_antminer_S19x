int __fastcall sub_11891C(int a1, _DWORD *a2, int a3, int a4)
{
  signed int v6; // r5
  int v8; // r7
  _DWORD *v9; // r0
  int v10; // r6
  unsigned int v11; // r2
  int v12; // r3
  int v13; // r3
  signed int v14; // r7
  _DWORD *v15; // r9
  int v16; // r8

  v6 = 0;
  while ( v6 < sub_10C010((int)a2) )
  {
    v8 = sub_10C01C(a2, v6);
    v9 = sub_1188F8((_DWORD *)v8);
    v10 = (int)v9;
    if ( v9 == (_DWORD *)1 )
    {
      sub_B550C(a3, "%*sIPv4", a4, &byte_1A4198);
    }
    else if ( v9 == (_DWORD *)2 )
    {
      sub_B550C(a3, "%*sIPv6", a4, &byte_1A4198);
    }
    else
    {
      sub_B550C(a3, "%*sUnknown AFI %u", a4, &byte_1A4198, v9);
    }
    if ( **(int **)v8 <= 2 )
      goto LABEL_13;
    v11 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)v8 + 8) + 2);
    if ( v11 == 4 )
    {
      sub_B6C30(a3, (int)" (MPLS)");
    }
    else if ( v11 <= 4 )
    {
      if ( v11 == 2 )
      {
        sub_B6C30(a3, (int)" (Multicast)");
        goto LABEL_13;
      }
      if ( v11 > 2 )
      {
        sub_B6C30(a3, (int)" (Unicast/Multicast)");
        goto LABEL_13;
      }
      if ( v11 != 1 )
        goto LABEL_40;
      sub_B6C30(a3, (int)" (Unicast)");
    }
    else if ( v11 == 65 )
    {
      sub_B6C30(a3, (int)" (VPLS)");
    }
    else if ( v11 <= 0x41 )
    {
      if ( v11 != 64 )
        goto LABEL_40;
      sub_B6C30(a3, (int)" (Tunnel)");
    }
    else
    {
      if ( v11 == 66 )
      {
        sub_B6C30(a3, (int)" (BGP MDT)");
        goto LABEL_13;
      }
      if ( v11 != 128 )
      {
LABEL_40:
        sub_B550C(a3, " (Unknown SAFI %u)", v11);
        goto LABEL_13;
      }
      sub_B6C30(a3, (int)" (MPLS-labeled VPN)");
    }
LABEL_13:
    v12 = **(_DWORD **)(v8 + 4);
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        sub_B6C30(a3, (int)":\n");
        v13 = *(_DWORD *)(v8 + 4);
        v14 = 0;
        v15 = *(_DWORD **)(v13 + 4);
        while ( v14 < sub_10C010((int)v15) )
        {
          v16 = sub_10C01C(v15, v14);
          sub_B550C(a3, (unsigned __int8 *)"%*s", a4 + 2, &byte_1A4198);
          if ( *(_DWORD *)v16 )
          {
            if ( *(_DWORD *)v16 == 1 )
            {
              if ( !sub_1180E0(a3, v10, 0, **(_DWORD **)(v16 + 4)) )
                return 0;
              sub_B6C30(a3, (int)"-");
              if ( !sub_1180E0(a3, v10, 255, *(_DWORD *)(*(_DWORD *)(v16 + 4) + 4)) )
                return 0;
              sub_B6C30(a3, (int)"\n");
            }
            ++v14;
          }
          else
          {
            if ( !sub_1180E0(a3, v10, 0, *(_DWORD *)(v16 + 4)) )
              return 0;
            ++v14;
            sub_B550C(a3, "/%d\n", 8 * **(_DWORD **)(v16 + 4) - (*(_DWORD *)(*(_DWORD *)(v16 + 4) + 12) & 7));
          }
        }
      }
      ++v6;
    }
    else
    {
      ++v6;
      sub_B6C30(a3, (int)": inherit\n");
    }
  }
  return 1;
}
