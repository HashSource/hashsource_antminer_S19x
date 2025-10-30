void __fastcall sub_1933D4(int a1)
{
  _DWORD *v2; // r4
  int *v3; // r4
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r3
  int v7; // r4
  _DWORD v8[3]; // [sp+0h] [bp-2Ch] BYREF
  int v9; // [sp+Ch] [bp-20h]
  _DWORD v10[7]; // [sp+10h] [bp-1Ch] BYREF

  if ( dword_4879D8 )
  {
    v5 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v5, "jit_inferior_init\n");
  }
  v2 = (_DWORD *)((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_4879E0);
  if ( !*v2 )
  {
    sub_160D34(a1, (int)&unk_3C0A78);
    *v2 = 1;
  }
  v3 = (int *)sub_1924F0();
  sub_192598(a1, v3);
  if ( !v4 && sub_192C58(a1, v8, v3) )
  {
    if ( v8[0] == 1 )
    {
      v7 = v9;
      if ( v9 )
      {
        do
        {
          sub_192010(a1, v7, (int)v10, v6);
          if ( !sub_191FB0(v7) )
            sub_192FD0(a1, v7, v10);
          v7 = v10[0];
        }
        while ( v10[0] );
      }
    }
    else
    {
      sub_259858("Unsupported JIT protocol version %ld in descriptor (expected 1)\n", v8[0]);
    }
  }
}
