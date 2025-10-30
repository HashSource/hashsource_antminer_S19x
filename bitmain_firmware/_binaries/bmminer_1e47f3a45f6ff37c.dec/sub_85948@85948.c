int __fastcall sub_85948(int a1, int a2)
{
  int *v3; // r0
  _BOOL4 v4; // r3
  int *v5; // r0
  int *v6; // r0
  int *v7; // r0
  int v8; // r4
  int *v9; // r0
  _QWORD v13[12]; // [sp+10h] [bp-7Ch] BYREF
  __int64 v14; // [sp+70h] [bp-1Ch]
  int v15; // [sp+78h] [bp-14h]
  int v16; // [sp+7Ch] [bp-10h]

  v16 = 0;
  v15 = 0;
  if ( sub_82DAC(*(_DWORD *)(a1 + 6264), a2) )
  {
    sub_8CD10(2, "src/rule.c", 84, "zlog_format_gen_msg fail");
    return -1;
  }
  else
  {
    if ( sub_9004C(a1 + 4144, v13) )
    {
      if ( *_errno_location() != 2 )
      {
        v3 = _errno_location();
        sub_8CD10(2, "src/rule.c", 91, "stat fail on [%s], errno[%d]", (const char *)(a1 + 4144), *v3);
        return -1;
      }
      v16 = 1;
      v15 = 1;
    }
    else
    {
      v4 = v14 != *(_QWORD *)(a1 + 5192) || v13[0] != *(_QWORD *)(a1 + 5184);
      v16 = v4;
    }
    if ( v16 )
    {
      close(*(_DWORD *)(a1 + 5176));
      *(_DWORD *)(a1 + 5176) = open64(a1 + 4144, *(_DWORD *)(a1 + 4140) | 0x441, *(_DWORD *)(a1 + 4136));
      if ( *(int *)(a1 + 5176) < 0 )
      {
        v5 = _errno_location();
        sub_8CD10(2, "src/rule.c", 107, "open file[%s] fail, errno[%d]", (const char *)(a1 + 4144), *v5);
        return -1;
      }
      if ( v15 && sub_9004C(a1 + 4144, v13) )
      {
        v6 = _errno_location();
        sub_8CD10(2, "src/rule.c", 114, "stat fail on new file[%s], errno[%d]", (const char *)(a1 + 4144), *v6);
        return -1;
      }
      *(_QWORD *)(a1 + 5184) = v13[0];
      *(_QWORD *)(a1 + 5192) = v14;
    }
    if ( write(
           *(_DWORD *)(a1 + 5176),
           **(const void ***)(a2 + 28),
           *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4) - **(_DWORD **)(a2 + 28)) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 6248) )
      {
        if ( ++*(_DWORD *)(a1 + 6252) >= *(_DWORD *)(a1 + 6248) )
        {
          *(_DWORD *)(a1 + 6252) = 0;
          if ( fsync(*(_DWORD *)(a1 + 5176)) )
          {
            v8 = *(_DWORD *)(a1 + 5176);
            v9 = _errno_location();
            sub_8CD10(2, "src/rule.c", 133, "fsync[%d] fail, errno[%d]", v8, *v9);
          }
        }
      }
      return 0;
    }
    else
    {
      v7 = _errno_location();
      sub_8CD10(2, "src/rule.c", 125, "write fail, errno[%d]", *v7);
      return -1;
    }
  }
}
