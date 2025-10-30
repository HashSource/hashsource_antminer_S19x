int __fastcall sub_1923D0(int a1, int a2, _DWORD *a3)
{
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r12
  int v9; // lr
  _DWORD *v10; // r4
  int v11; // r0
  int v12; // [sp-4h] [bp-4Ch]
  _DWORD v13[6]; // [sp+8h] [bp-40h] BYREF
  _DWORD v14[2]; // [sp+20h] [bp-28h] BYREF
  int v15[8]; // [sp+28h] [bp-20h] BYREF

  v14[1] = a1;
  v15[4] = (int)sub_191E18;
  v15[6] = (int)sub_191D94;
  v14[0] = 0;
  v15[5] = 0;
  v15[7] = (int)v14;
  if ( dword_4879DC )
  {
    (*(void (__fastcall **)(int *))(*(_DWORD *)dword_4879DC + 16))(v15);
    sub_15CD0C(v13, v15[2], v15[0]);
    result = v13[0];
    v5 = v13[1];
    v6 = v13[2];
    v7 = v13[3];
    v8 = v13[4];
    *a3 = v13[0];
    a3[1] = v5;
    a3[2] = v6;
    a3[3] = v7;
    a3[4] = v8;
  }
  else
  {
    result = sub_94700(
               (int)"jit.c",
               1254,
               "%s: Assertion `%s' failed.",
               "void jit_frame_this_id(frame_info*, void**, frame_id*)",
               "loaded_jit_reader");
    if ( *(_DWORD *)(result + 12) == 31 )
    {
      v12 = v9;
      v10 = *(_DWORD **)(result + 28);
      if ( v10 )
      {
        while ( 1 )
        {
          v11 = sub_1CD14C(v10[12], dword_4879D0);
          if ( v11 && *(_DWORD *)(v11 + 8) == v10[4] )
          {
            *(_DWORD *)(v11 + 4) = 0;
            *(_DWORD *)(v11 + 8) = 0;
          }
          v10 = (_DWORD *)*v10;
          if ( !v10 )
            __asm { POP             {R4-R6,PC} }
        }
      }
    }
  }
  return result;
}
