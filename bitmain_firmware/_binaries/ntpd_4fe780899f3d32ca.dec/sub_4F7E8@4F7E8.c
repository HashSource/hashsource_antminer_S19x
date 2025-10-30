__int64 __fastcall sub_4F7E8(int a1, int a2)
{
  int v3; // r6
  void *v4; // r8
  int v5; // r0
  __int64 result; // r0
  int v7; // r0
  int v8; // [sp+0h] [bp-Ch] BYREF

  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 84);
    if ( v3 )
    {
      v4 = *(void **)v3;
      if ( *(_DWORD *)v3 )
      {
        v5 = *(_DWORD *)(v3 + 28);
        if ( v5 == -1 )
        {
          free(*(void **)v3);
          *(_DWORD *)v3 = 0;
        }
        else
        {
          if ( ioctl(v5, 0x5415u, &v8) == -1 )
            sub_64E00(2, "NeoClock4X(%d): can't query RTS/DTR state: %m", a1);
          v7 = *(_DWORD *)(v3 + 28);
          v8 &= 0xFFFFFFF9;
          if ( ioctl(v7, 0x5418u, &v8) == -1 )
            sub_64E00(2, "NeoClock4X(%d): can't set RTS/DTR to power neoclock4x: %m", a1);
          sub_18E64(v3 + 8);
          free(v4);
          *(_DWORD *)v3 = 0;
        }
      }
    }
  }
  result = sub_64E00(3, "NeoClock4X(%d): shutdown", a1);
  if ( (ntp_syslogmask & 0x100) != 0 )
    return sub_64E00(6, "NeoClock4X(%d): receiver shutdown done", a1);
  return result;
}
