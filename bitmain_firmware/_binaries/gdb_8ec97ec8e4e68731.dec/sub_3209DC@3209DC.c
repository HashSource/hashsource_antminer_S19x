unsigned __int8 *__fastcall sub_3209DC(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r4
  _BYTE *v4; // r0
  int v5; // r1
  size_t v6; // r6
  unsigned __int8 *v7; // r1
  size_t v8; // r7
  __int64 v9; // r0
  size_t v10; // r2
  void *v11; // r0
  void *ptr; // [sp+4h] [bp-28h] BYREF
  _BYTE *v14; // [sp+8h] [bp-24h]
  int v15; // [sp+Ch] [bp-20h]
  void *v16; // [sp+10h] [bp-1Ch] BYREF
  _BYTE *v17; // [sp+14h] [bp-18h]
  int v18; // [sp+18h] [bp-14h]
  void *v19; // [sp+1Ch] [bp-10h] BYREF
  _BYTE *v20; // [sp+20h] [bp-Ch]
  int v21; // [sp+24h] [bp-8h]

  v2 = a2;
  if ( !a2 )
    return v2;
  v2 = (unsigned __int8 *)*a2;
  if ( !*a2 )
    return v2;
  v15 = 0;
  v14 = 0;
  ptr = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v4 = sub_31E970(a1, a2);
  v5 = (int)v4;
  if ( v4 )
  {
    if ( *v4 )
      v5 = sub_31EA78((int)&ptr, (int)v4);
    else
      v5 = (unsigned __int8)*v4;
  }
  if ( ptr == v14 )
    v6 = 0;
  else
    v6 = v14 - (_BYTE *)ptr;
  v7 = sub_32081C((int)&v16, (unsigned __int8 *)v5);
  if ( v16 != v17 )
  {
    v8 = v17 - (_BYTE *)v16;
    LODWORD(v9) = sub_3200E0((int)&v19, v7);
    HIDWORD(v9) = v19;
    v2 = (unsigned __int8 *)v9;
    if ( v19 == v20 || (v10 = v20 - (_BYTE *)v19, v20 == v19) )
    {
LABEL_13:
      sub_31E858(a1, "(");
      if ( v8 )
        sub_31EC14(__SPAIR64__((unsigned int)v16, a1), v8);
      goto LABEL_15;
    }
LABEL_28:
    LODWORD(v9) = a1;
    sub_31EC14(v9, v10);
    goto LABEL_13;
  }
  LODWORD(v9) = sub_3200E0((int)&v19, v7);
  HIDWORD(v9) = v19;
  v2 = (unsigned __int8 *)v9;
  if ( v19 != v20 )
  {
    v10 = v20 - (_BYTE *)v19;
    if ( v20 != v19 )
    {
      v8 = 0;
      goto LABEL_28;
    }
  }
  sub_31E858(a1, "(");
LABEL_15:
  sub_31E858(a1, ") ");
  v11 = ptr;
  if ( v6 )
  {
    sub_31EC14(__SPAIR64__((unsigned int)ptr, a1), v6);
    v11 = ptr;
  }
  if ( v11 )
  {
    free(v11);
    v14 = 0;
    v15 = 0;
    ptr = 0;
  }
  if ( v16 )
  {
    free(v16);
    v17 = 0;
    v18 = 0;
    v16 = 0;
  }
  if ( v19 )
    free(v19);
  return v2;
}
