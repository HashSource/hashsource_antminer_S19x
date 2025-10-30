void *__fastcall sub_15AF04(int a1, int a2)
{
  int v2; // r0
  __int64 v3; // r0
  char *v4; // r2
  int v5; // lr
  char *v6; // r8
  signed int v7; // r3
  signed int v8; // r4
  signed int v9; // r6
  char *v10; // r7
  size_t v12; // r2
  int v13; // r1
  int v15; // [sp-4h] [bp-4h]
  char vars0; // [sp+0h] [bp+0h]
  int vars4; // [sp+4h] [bp+4h]

  v2 = **(char **)(a2 + 24);
  if ( v2 == 1 || (unsigned __int8)(v2 - 18) <= 1u )
  {
    sub_170040(a2);
    JUMPOUT(0x168974);
  }
  v3 = sub_94700((int)"findvar.c", 210, "store_typed_address: type is not a pointer or reference");
  v15 = v5;
  v6 = v4;
  v8 = HIDWORD(v3) - v7;
  v9 = v7;
  v10 = (char *)v3;
  if ( HIDWORD(v3) - v7 > 0 && vars4 == 0 )
  {
    memcpy((void *)(v3 + v8), v4, v9);
    if ( !vars0 )
      return memset(v10, 0, v8);
  }
  else
  {
    if ( ((vars4 == 0) & ((unsigned int)v8 >> 31)) != 0 )
      return memcpy((void *)v3, &v4[-v8], HIDWORD(v3));
    if ( SHIDWORD(v3) >= v9 )
      v12 = v9;
    else
      v12 = HIDWORD(v3);
    memcpy((void *)v3, v6, v12);
    if ( v8 <= 0 )
      __asm { POPLE           {R4-R10,PC} }
    if ( !vars0 )
    {
      v13 = 0;
      return memset(&v10[v9], v13, v8);
    }
    if ( vars4 )
    {
      if ( v6[v9 - 1] >= 0 )
        v13 = 0;
      else
        v13 = 255;
      return memset(&v10[v9], v13, v8);
    }
  }
  return memset(v10, (unsigned __int8)(*v6 >> 7), v8);
}
