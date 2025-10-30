int __fastcall sub_34264(int a1, unsigned int a2)
{
  signed int v3; // r2
  unsigned int v4; // r5
  int v5; // r12
  int result; // r0
  int v7; // r3
  unsigned int v8; // r6
  unsigned int v9; // r3
  unsigned int v10; // r3
  unsigned int v11; // r3

  v3 = *(unsigned __int8 *)(a1 + 65);
  if ( *(unsigned __int8 *)(a1 + 66) < a2 )
    a2 = *(unsigned __int8 *)(a1 + 66);
  if ( v3 < (int)a2 )
    v4 = a2;
  else
    v4 = *(unsigned __int8 *)(a1 + 65);
  if ( (*(_DWORD *)(a1 + 68) & 0x800) != 0 && *(unsigned __int8 *)(a1 + 64) != v4 )
  {
    sub_3394C((_DWORD *)a1);
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
  if ( *(int *)(a1 + 308) <= 0 )
  {
    if ( *(_DWORD *)(a1 + 232) )
    {
      v9 = *(_DWORD *)(a1 + 720);
      if ( current_time >= v9 || (result = ntp_minpkt + v9, ntp_minpkt + v9 != v8) )
LABEL_21:
        *(_DWORD *)(a1 + 720) = v8;
    }
    else
    {
      if ( *(int *)(a1 + 312) <= 0 )
      {
        if ( *(unsigned __int8 *)(a1 + 94) < v4 )
          LOBYTE(v4) = *(_BYTE *)(a1 + 94);
      }
      else
      {
        LOBYTE(v4) = v3;
      }
      if ( (*(_DWORD *)(a1 + 68) & 8) != 0 )
      {
        v10 = 1 << v4;
      }
      else
      {
        result = (unsigned __int8)sub_68AE4(ntp_minpkt, current_time);
        v5 = *(_DWORD *)(a1 + 712);
        LOBYTE(v3) = *(_BYTE *)(a1 + 65);
        v10 = ((unsigned __int8)result | 0x1000u) << v4 >> 12;
      }
      v11 = v10 + *(_DWORD *)(a1 + 716);
      if ( v11 < v8 )
        v11 = v8;
      *(_DWORD *)(a1 + 720) = v11;
      if ( v5 > 1 << v3 )
        *(_DWORD *)(a1 + 720) = v11 + ntp_minpkt;
    }
  }
  else if ( (unsigned int)current_time >= *(_DWORD *)(a1 + 720) )
  {
    if ( (*(_DWORD *)(a1 + 68) & 8) != 0 )
    {
      *(_DWORD *)(a1 + 720) = current_time + 1;
      return result;
    }
    goto LABEL_21;
  }
  return result;
}
