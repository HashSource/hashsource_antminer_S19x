void __fastcall sub_5C058(const char *a1, const char **a2, int a3)
{
  int v5; // r0
  const char *v6; // r1
  int v7; // r7
  int v8; // r5
  _DWORD *v9; // r3
  _DWORD *v10; // r2
  bool v11; // zf
  _DWORD *v12; // r3
  _DWORD *v13; // r2
  _DWORD *v14; // [sp+Ch] [bp-28h] BYREF
  char *endptr; // [sp+10h] [bp-24h] BYREF
  _DWORD *v16; // [sp+14h] [bp-20h] BYREF
  _DWORD *v17; // [sp+18h] [bp-1Ch] BYREF
  _DWORD *v18; // [sp+1Ch] [bp-18h] BYREF
  _DWORD *v19; // [sp+20h] [bp-14h] BYREF
  _DWORD *v20; // [sp+24h] [bp-10h] BYREF
  _DWORD *v21; // [sp+28h] [bp-Ch] BYREF
  _DWORD *v22; // [sp+2Ch] [bp-8h] BYREF

  v14 = 0;
  if ( a3 <= 0 )
    sub_946E0("USAGE: %s <BKPT> [<COMMAND> [<COMMAND>...]]", a1);
  v5 = strtol(*a2, &endptr, 0);
  v6 = *a2;
  v7 = v5;
  if ( *a2 == endptr )
    sub_946E0("breakpoint number argument \"%s\" is not a number.", v6);
  if ( *endptr )
    sub_946E0("junk at the end of breakpoint number argument \"%s\".", v6);
  v8 = sub_CD3C8();
  if ( !v8 )
    sub_946E0("breakpoint %d not found.", v7);
  dword_474824 = (int)a2;
  dword_47481C = 1;
  dword_474820 = a3;
  if ( sub_C68E8() )
  {
    sub_57F2C(&v16, (int (__fastcall *)(int))sub_5B2A0, 1, (void (__fastcall *)(_DWORD, int))sub_C71F4, v8);
    v12 = v14;
    v13 = v16;
    v16 = 0;
    v11 = v14 == 0;
    v14 = v13;
    if ( !v11 )
    {
      v19 = v12;
      sub_57E18(&v19);
      if ( v16 )
      {
        v18 = v16;
        sub_57E18(&v18);
      }
    }
  }
  else
  {
    sub_57F2C(&v17, (int (__fastcall *)(int))sub_5B2A0, 1, 0, 0);
    v9 = v14;
    v10 = v17;
    v17 = 0;
    v11 = v14 == 0;
    v14 = v10;
    if ( !v11 )
    {
      v21 = v9;
      sub_57E18(&v21);
      if ( v17 )
      {
        v20 = v17;
        sub_57E18(&v20);
      }
    }
  }
  sub_DD974(v8, &v14);
  if ( v14 )
  {
    v22 = v14;
    sub_57E18(&v22);
  }
}
