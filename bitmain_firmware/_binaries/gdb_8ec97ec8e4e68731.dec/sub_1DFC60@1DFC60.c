int __fastcall sub_1DFC60(int **a1, int a2)
{
  int v4; // r4
  int v5; // r0
  __int64 v7; // r0
  int v8; // lr
  __int64 v9; // r4
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r0
  int **v13; // r0
  _BYTE v14[16]; // [sp+0h] [bp-40h] BYREF
  int *v15[2]; // [sp+10h] [bp-30h] BYREF
  void *ptr; // [sp+18h] [bp-28h]
  void *v17; // [sp+1Ch] [bp-24h]
  int v18; // [sp+34h] [bp-Ch]
  int **v19; // [sp+38h] [bp-8h]
  int v20; // [sp+3Ch] [bp-4h]

  v4 = **a1;
  if ( ((int (__fastcall *)(int))loc_166974)(v4) )
  {
    ((void (__fastcall *)(int, int **, int))loc_1669C0)(v4, a1, a2);
  }
  else
  {
    if ( ((int (__fastcall *)(int))loc_167368)(v4) < 0 )
    {
      v7 = sub_94700((int)"regcache.c", 1266, "regcache_write_pc: Unable to update PC");
      v18 = v4;
      v19 = a1;
      v20 = v8;
      v9 = v7;
      v10 = sub_25689C(v14);
      if ( (_DWORD)v9 )
      {
        v11 = (_DWORD *)sub_2568D4(v14, v9, "w");
        if ( !v11 )
          sub_258B04("maintenance print architecture");
        LODWORD(v9) = v14;
      }
      else
      {
        v11 = (_DWORD *)sub_242F8C(v10);
        LODWORD(v9) = *v11;
      }
      if ( !sub_22EB0C(v11) )
      {
        v12 = sub_16F654(0);
        ((void (__fastcall *)(int **, int, _DWORD, int))loc_1DD4B4)(v15, v12, 0, 1);
        sub_1DF0FC(v15, v9, SHIDWORD(v9));
        if ( ptr )
          free(ptr);
        if ( v17 )
          free(v17);
        sub_256514(v14);
        __asm { POP             {R4,R5,PC} }
      }
      v13 = (int **)sub_1DDB40(qword_4878EC, SHIDWORD(qword_4878EC), unk_4878F4);
      sub_1DF0FC(v13, v9, SHIDWORD(v9));
      sub_256514(v14);
      __asm { POP             {R4,R5,PC} }
    }
    v5 = ((int (__fastcall *)(int))loc_167368)(v4);
    ((void (__fastcall *)(int **, int, int, _DWORD))loc_1E02CC)(a1, v5, a2, 0);
  }
  return sub_15D778();
}
