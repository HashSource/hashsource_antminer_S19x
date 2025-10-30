void __fastcall sub_181324(const char *a1, int a2)
{
  _DWORD *v4; // r0
  char *v5; // r7
  int v6; // r4
  int v7; // r8
  int v8; // r8
  int v9; // r3
  int v10; // r0
  _DWORD *v11; // r3
  int v12; // r4
  int v13; // r0
  int v14; // [sp+0h] [bp-2Ch] BYREF
  char *s1; // [sp+4h] [bp-28h] BYREF
  _DWORD *v16; // [sp+8h] [bp-24h] BYREF
  _DWORD v17[3]; // [sp+Ch] [bp-20h] BYREF
  _DWORD v18[5]; // [sp+18h] [bp-14h] BYREF

  if ( !sub_22EBBC(a1) )
    sub_946E0("The program is not being run.");
  v4 = sub_17EBD4(&s1, a1, &v14);
  v5 = s1;
  if ( s1 )
  {
    v4 = (_DWORD *)strncmp(s1, "-a", 2u);
    if ( !v4 )
    {
      if ( v5[2] )
      {
        if ( dword_487950 )
        {
          if ( v5 != (char *)-2 )
            sub_946E0("Can't resume all threads and specify proceed count simultaneously.");
          goto LABEL_6;
        }
      }
      else if ( dword_487950 )
      {
LABEL_6:
        v6 = 1;
        goto LABEL_23;
      }
      sub_946E0("`-a' is meaningless in all-stop mode.");
    }
    v16 = 0;
    if ( dword_487950 )
    {
      v10 = sub_23E408(dword_4878EC, dword_4878F0, dword_4878F4);
    }
    else
    {
      sub_188284(v17, v18);
      v10 = sub_23E408(v17[0], v17[1], v17[2]);
    }
    if ( v10 )
      v11 = *(_DWORD **)(v10 + 136);
    v7 = 0;
    if ( v10 )
      v16 = v11;
    while ( 1 )
    {
      v4 = (_DWORD *)sub_CE118(&v16, v18);
      v6 = (int)v4;
      if ( !v4 )
        break;
      if ( (int)v4 > 0 )
      {
        v12 = v18[0];
        v13 = sub_14CC00((int)v5);
        sub_D16C4(v12, v13 - 1, a2);
        v7 = 1;
        if ( a2 )
          sub_259F10("  ");
      }
    }
    if ( a2 )
      v8 = v7 ^ 1;
    else
      v8 = 0;
    if ( v8 )
      v4 = (_DWORD *)sub_259F10("Not stopped at any breakpoint; argument ignored.\n");
  }
  else
  {
    v6 = 0;
  }
LABEL_23:
  if ( !sub_22EBBC(v4) )
    sub_946E0("The program is not being run.");
  sub_17E868();
  if ( dword_487950 )
    v9 = ((unsigned __int8)v6 ^ 1) & 1;
  else
    v9 = 1;
  if ( v9 )
  {
    sub_17E884();
    sub_17E8C4();
  }
  sub_180104((int)&dword_4899A0, v14);
  if ( a2 )
    sub_259F10("Continuing.\n");
  sub_181264(v6);
  if ( s1 )
    free(s1);
}
