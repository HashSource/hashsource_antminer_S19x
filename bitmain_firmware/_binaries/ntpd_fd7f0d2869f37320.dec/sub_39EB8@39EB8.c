int __fastcall sub_39EB8(int a1)
{
  unsigned int v2; // r12
  int v3; // r5
  const char *v4; // r0
  char v6; // r8
  int (__fastcall **v7)(int, int); // r10
  int v8; // r11
  int v9; // r0
  int v10; // r2
  int v11; // r9

  if ( *(_WORD *)(a1 + 16) == 2 && (v2 = bswap32(*(_DWORD *)(a1 + 20)), HIWORD(v2) << 16 == 2139029504) )
  {
    v6 = BYTE1(v2);
    if ( (unsigned __int8)num_refclock_conf > (unsigned int)BYTE1(v2)
      && (v7 = (int (__fastcall **)(int, int))*(&refclock_conf + BYTE1(v2)), *v7) )
    {
      v8 = (unsigned __int8)v2;
      v9 = sub_64B04(0, 792, 0, 1);
      v10 = *(_DWORD *)(a1 + 68);
      *(_BYTE *)(a1 + 94) = *(_BYTE *)(a1 + 66);
      *(_BYTE *)(a1 + 89) = v8;
      *(_BYTE *)(a1 + 93) = 0;
      *(_BYTE *)(a1 + 88) = v6;
      *(_DWORD *)(a1 + 68) = v10 | 8;
      v11 = v9;
      *(_DWORD *)(a1 + 84) = v9;
      *(_BYTE *)(a1 + 91) = 3;
      *(_BYTE *)(v9 + 43) = v6;
      *(_DWORD *)(v9 + 4) = v7;
      *(_DWORD *)(v9 + 28) = -1;
      *(_DWORD *)(v9 + 772) = current_time;
      if ( *(_BYTE *)(a1 + 63) == 1 )
        *(_BYTE *)(a1 + 92) = 2;
      else
        *(_BYTE *)(a1 + 92) = 4;
      v3 = (*v7)(v8, a1);
      if ( v3 )
      {
        v3 = 1;
        *(_DWORD *)(a1 + 112) = *(_DWORD *)(v11 + 764);
      }
      else
      {
        sub_39E24(a1);
      }
    }
    else
    {
      v3 = 0;
      sub_65D40(3, "refclock_newpeer: clock type %d invalid\n", BYTE1(v2));
    }
  }
  else
  {
    v3 = 0;
    v4 = (const char *)sub_6D2C0(a1 + 16);
    sub_65D40(3, "refclock_newpeer: clock address %s invalid", v4);
  }
  return v3;
}
