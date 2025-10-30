int __fastcall sub_171B30(int a1, _QWORD *a2, _QWORD *a3)
{
  int v3; // r3
  _DWORD *v4; // r3
  int v8; // r0
  _DWORD *v10; // r3
  __int64 v11; // [sp+0h] [bp-10h] BYREF
  __int64 v12; // [sp+8h] [bp-8h] BYREF

  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 24);
  v11 = 0;
  v12 = 0;
  v4 = *(_DWORD **)(v3 + 12);
  if ( v4 )
  {
    v8 = sub_17195C(v4, &v11, &v12);
    if ( v8 != -1 )
    {
      if ( v8 != 1 )
      {
        if ( !a2 )
          goto LABEL_6;
        goto LABEL_5;
      }
      if ( a2 )
      {
        v10 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + 12) + 24) + 24);
        if ( *v10 && (!a3 || v10[4]) )
        {
LABEL_5:
          *a2 = v11;
LABEL_6:
          if ( a3 )
          {
LABEL_7:
            *a3 = v12;
            return 1;
          }
          return 1;
        }
      }
      else
      {
        if ( !a3 )
          return 1;
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + 12) + 24) + 24)
                       + 16) )
          goto LABEL_7;
      }
    }
  }
  return 0;
}
