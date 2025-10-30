int __fastcall sub_348C4(int a1, unsigned int a2)
{
  unsigned int v3; // r3
  unsigned int v4; // r5
  int v5; // r12
  int result; // r0
  int v7; // r2
  unsigned int v8; // r6
  unsigned int v9; // r3
  int v10; // r1
  unsigned int v11; // r5
  unsigned int v12; // r5
  unsigned __int8 v13; // r0

  v3 = *(unsigned __int8 *)(a1 + 65);
  if ( a2 >= *(unsigned __int8 *)(a1 + 66) )
    a2 = *(unsigned __int8 *)(a1 + 66);
  if ( a2 < v3 )
    v4 = *(unsigned __int8 *)(a1 + 65);
  else
    v4 = a2;
  if ( (*(_DWORD *)(a1 + 68) & 0x800) != 0 && *(unsigned __int8 *)(a1 + 64) != v4 )
  {
    sub_33EBC((_DWORD *)a1);
    LOBYTE(v3) = *(_BYTE *)(a1 + 65);
  }
  *(_BYTE *)(a1 + 64) = v4;
  v5 = *(_DWORD *)(a1 + 712);
  result = ntp_minpkt;
  v7 = v5 - (7 << v3);
  if ( v7 < ntp_minpkt )
    v8 = current_time + ntp_minpkt;
  else
    v8 = current_time + v7;
  if ( *(int *)(a1 + 308) > 0 )
  {
    if ( (unsigned int)current_time < *(_DWORD *)(a1 + 720) )
      return result;
    if ( (*(_DWORD *)(a1 + 68) & 8) != 0 )
    {
      *(_DWORD *)(a1 + 720) = current_time + 1;
      return result;
    }
    goto LABEL_16;
  }
  if ( *(_DWORD *)(a1 + 232) )
  {
    v9 = *(_DWORD *)(a1 + 720);
    if ( current_time >= v9 || (result = ntp_minpkt + v9, ntp_minpkt + v9 != v8) )
LABEL_16:
      *(_DWORD *)(a1 + 720) = v8;
  }
  else
  {
    if ( *(int *)(a1 + 312) <= 0 )
    {
      if ( v4 >= *(unsigned __int8 *)(a1 + 94) )
        LOBYTE(v4) = *(_BYTE *)(a1 + 94);
    }
    else
    {
      LOBYTE(v4) = v3;
    }
    v10 = *(_DWORD *)(a1 + 68);
    if ( (v10 & 8) != 0 )
    {
      v11 = 1 << v4;
    }
    else
    {
      v13 = sub_69A2C(ntp_minpkt, v10);
      v5 = *(_DWORD *)(a1 + 712);
      LOBYTE(v3) = *(_BYTE *)(a1 + 65);
      v11 = (v13 | 0x1000u) << v4 >> 12;
    }
    result = *(_DWORD *)(a1 + 716);
    v12 = v11 + result;
    if ( v12 < v8 )
      v12 = v8;
    *(_DWORD *)(a1 + 720) = v12;
    if ( v5 > 1 << v3 )
      *(_DWORD *)(a1 + 720) = v12 + ntp_minpkt;
  }
  return result;
}
