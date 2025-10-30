int __fastcall sub_21DDC8(int a1)
{
  _DWORD *v1; // r4
  int v3; // r3
  int (__fastcall *v4)(_DWORD *, int); // r3
  int v5; // r0
  int v6; // r7
  _DWORD **v7; // r8
  _DWORD **v8; // r7
  _DWORD *v9; // t1
  int v10; // r2
  _DWORD v12[6]; // [sp+0h] [bp-18h] BYREF

  v1 = *(_DWORD **)(dword_487D2C + 36);
  if ( v1 )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        v3 = v1[33];
        if ( v3 )
        {
          v4 = *(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(v3 + 40) + 56);
          if ( v4 )
          {
            v5 = v4(v1, a1);
            if ( v5 )
              break;
          }
        }
        v1 = (_DWORD *)*v1;
        if ( !v1 )
          return 0;
      }
      v6 = *(_DWORD *)(v5 + 32);
      v7 = (_DWORD **)(v6 + 8);
      v8 = (_DWORD **)(v6 + 16);
      do
      {
        v9 = *v7++;
        v10 = sub_C28A8(v9, v12);
        if ( v10 )
        {
          while ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v10 + 32) >> 3)) != 2 || *(_DWORD *)(v10 + 8) != a1 )
          {
            v10 = sub_C28E4((int)v12);
            if ( !v10 )
              goto LABEL_12;
          }
          return v10;
        }
LABEL_12:
        ;
      }
      while ( v8 != v7 );
      v1 = (_DWORD *)*v1;
      if ( v1 )
        continue;
      break;
    }
  }
  return 0;
}
