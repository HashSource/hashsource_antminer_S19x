int __fastcall sub_56C80(int result, int a2, int a3)
{
  int v4; // [sp+Ch] [bp-828h]
  _DWORD v5[3]; // [sp+814h] [bp-20h] BYREF
  void *ptr; // [sp+820h] [bp-14h]
  int v7; // [sp+824h] [bp-10h]
  int v8; // [sp+828h] [bp-Ch]
  int i; // [sp+82Ch] [bp-8h]

  v4 = result;
  if ( a3 )
  {
    v8 = sub_588A0(a3);
    for ( i = (*(int (__fastcall **)(int))v8)(v8); i; i = (*(int (__fastcall **)(int))v8)(v8) )
    {
      v7 = *(_DWORD *)(v8 + 20);
      if ( v4 == ***(_DWORD ***)(v7 + 16) )
      {
        ptr = (void *)(*(int (__fastcall **)(int))(v8 + 8))(i);
        v5[0] = a2;
        v5[1] = 0;
        v5[2] = 1;
        (*(void (__fastcall **)(int, _DWORD *, int))(v8 + 4))(v8, v5, 12);
        free(ptr);
        return sub_58924(v8);
      }
    }
    return sub_58924(v8);
  }
  return result;
}
