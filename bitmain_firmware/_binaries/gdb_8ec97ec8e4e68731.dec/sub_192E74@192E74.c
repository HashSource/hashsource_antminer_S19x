int __fastcall sub_192E74(int a1, int a2, _DWORD *a3)
{
  void *v3; // r10
  int result; // r0
  int v7; // r8
  int v8; // r11
  _DWORD *v9; // r4
  void *v10; // r10
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  int v13; // r0
  _DWORD v14[5]; // [sp+8h] [bp-14h] BYREF

  result = dword_4879DC;
  v14[0] = sub_191E18;
  v14[1] = sub_1922E8;
  v14[2] = sub_191D94;
  if ( dword_4879DC )
  {
    v7 = *(_DWORD *)dword_4879DC;
    if ( *a3 )
    {
      sub_94700(
        (int)"jit.c",
        1202,
        "%s: Assertion `%s' failed.",
        "int jit_frame_sniffer(const frame_unwind*, frame_info*, void**)",
        "!*cache");
      sub_33AC04(v3);
      sub_338FFC(v13);
    }
    v8 = sub_15ECB4(a2);
    v9 = sub_93094(1u, 8u);
    *a3 = v9;
    v10 = sub_9836C(0x20u);
    ((void (__fastcall *)(void *, int, _DWORD, int))loc_1DD4B4)(v10, v8, 0, 1);
    *v9 = v10;
    v9[1] = a2;
    v14[3] = v9;
    result = (*(int (__fastcall **)(int, _DWORD *))(v7 + 12))(v7, v14);
    if ( result == 1 )
    {
      if ( dword_4879D8 )
      {
        v11 = (_DWORD *)sub_242FC8(1);
        sub_2594B0(*v11, "Successfully unwound frame using JIT reader.\n");
        return 1;
      }
    }
    else
    {
      if ( dword_4879D8 )
      {
        v12 = (_DWORD *)sub_242FC8(result);
        sub_2594B0(*v12, "Could not unwind frame using JIT reader.\n");
      }
      ((void (__fastcall *)(int, _DWORD))loc_192DF4)(a2, *a3);
      result = 0;
      *a3 = 0;
    }
  }
  return result;
}
