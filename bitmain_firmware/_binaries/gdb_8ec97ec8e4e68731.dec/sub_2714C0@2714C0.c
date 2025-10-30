int __fastcall sub_2714C0(int a1, unsigned int a2, int a3, int a4)
{
  int v5; // r0
  _BYTE *v7; // r3
  __int64 v8; // r0
  int v9; // r2
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  _QWORD v11[3]; // [sp+4h] [bp-18h] BYREF

  if ( a2 <= 5 )
    *(_DWORD *)(a1 + 108) = a2;
  else
    a4 = 0;
  if ( a2 > 5 )
    *(_DWORD *)(a1 + 108) = a4;
  if ( (*(int (**)(void))(*(_DWORD *)(*(_DWORD *)(a1 + 104) + 36) + 28))() )
  {
    v5 = *(_DWORD *)(a1 + 80);
    if ( v5 )
    {
      if ( !sub_26BF4C(v5) )
      {
        sub_2706B0(&ptr, *(_DWORD *)(a1 + 80), *(_DWORD *)(a1 + 108));
        v7 = *(_BYTE **)(a1 + 116);
        if ( ptr == (char *)v11 + 4 )
        {
          sub_33B48C(a1 + 116, &ptr);
          v7 = ptr;
        }
        else
        {
          v8 = v11[0];
          if ( v7 == (_BYTE *)(a1 + 124) )
          {
            *(_DWORD *)(a1 + 116) = ptr;
            *(_QWORD *)(a1 + 120) = v8;
          }
          else
          {
            *(_DWORD *)(a1 + 116) = ptr;
            *(_DWORD *)(a1 + 120) = v8;
            v9 = *(_DWORD *)(a1 + 124);
            *(_DWORD *)(a1 + 124) = HIDWORD(v8);
            if ( v7 )
            {
              ptr = v7;
              HIDWORD(v11[0]) = v9;
              goto LABEL_14;
            }
          }
          ptr = (char *)v11 + 4;
          v7 = (char *)v11 + 4;
        }
LABEL_14:
        LODWORD(v11[0]) = 0;
        *v7 = 0;
        if ( ptr != (char *)v11 + 4 )
          sub_339E64(ptr);
      }
    }
  }
  return *(_DWORD *)(a1 + 108);
}
