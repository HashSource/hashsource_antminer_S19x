int __fastcall sub_24AF8(int a1, int a2, int *a3)
{
  int v6; // r0
  int v7; // r8
  int v8; // r0
  void *v9; // r0
  int v10; // r2
  int v11; // lr
  int *v12; // r3
  int v13; // t1
  int v14; // r4
  _BYTE v16[4]; // [sp+Ch] [bp-24h] BYREF
  void *ptr; // [sp+10h] [bp-20h] BYREF
  int *v18; // [sp+14h] [bp-1Ch]
  int (**v19[5])(void); // [sp+1Ch] [bp-14h] BYREF

  v6 = sub_1DFB3C(a2);
  if ( sub_230020(v6, v16, 4) )
    return sub_24A5C(a1, a3);
  v7 = ((int (__fastcall *)(int))loc_165BB8)(a1);
  v8 = ((int (__fastcall *)(int))loc_165C28)(a1);
  sub_187D0(v19, (int)&off_4696BC, v7, v8, 0, a2);
  sub_187E8(&ptr, v19);
  v9 = ptr;
  if ( ptr == v18 )
  {
LABEL_8:
    if ( ptr )
      sub_339E64(ptr);
    return sub_24A5C(a1, a3);
  }
  v10 = *(_DWORD *)ptr;
  v11 = *a3;
  if ( *a3 != (*(_DWORD *)ptr & 0xFFFFFFFE) )
  {
    v12 = (int *)((char *)ptr + 4);
    while ( v18 != v12 )
    {
      v13 = *v12++;
      LOBYTE(v10) = v13;
      if ( (v13 & 0xFFFFFFFE) == v11 )
        goto LABEL_12;
    }
    goto LABEL_8;
  }
LABEL_12:
  if ( (v10 & 1) != 0 )
  {
    *a3 = v11 | 1;
    v14 = sub_24A5C(a1, a3);
    v9 = ptr;
    if ( !ptr )
      return v14;
  }
  else
  {
    v14 = 4;
  }
  sub_339E64(v9);
  return v14;
}
