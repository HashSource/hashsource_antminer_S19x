int __fastcall sub_1EC2E0(int a1, int a2, int a3, int a4)
{
  int *v4; // r0
  int result; // r0
  int v6; // r0
  int v7; // r0
  const char **v8; // r5
  char *v9; // r7
  size_t v10; // r8
  int v11; // r9
  int v12; // r0
  _DWORD *v13; // r0
  const char *v14; // r0
  int v18; // [sp+1Ch] [bp-28h] BYREF
  int v19; // [sp+20h] [bp-24h]
  int v20; // [sp+24h] [bp-20h]
  int v21; // [sp+28h] [bp-1Ch] BYREF
  int v22; // [sp+2Ch] [bp-18h]
  int v23; // [sp+30h] [bp-14h]
  _DWORD v24[4]; // [sp+34h] [bp-10h] BYREF

  v4 = &dword_48A590;
  if ( dword_48A590 )
  {
    v13 = (_DWORD *)sub_242FC8(&dword_48A590);
    v4 = (int *)sub_2594B0(*v13, "remote_stop called\n");
  }
  if ( !sub_232950(v4) )
    return ((int (*)(void))loc_1E4AC4)();
  v18 = a2;
  v19 = a3;
  v20 = a4;
  v6 = sub_16F654(a2);
  v7 = ((int (__fastcall *)(int))loc_1E2770)(v6);
  v8 = (const char **)dword_488C94;
  v9 = *(char **)dword_488C94;
  v10 = sub_1E2890(v7);
  if ( !((int (__fastcall *)(_DWORD))loc_1E2198)(0) )
    sub_1E7E3C((int)v8);
  if ( !v8[8] )
    sub_946E0("Remote server does not support stopping threads");
  if ( sub_98F78(&v18, &qword_46BBCC) || ((int (__fastcall *)(int))loc_1E2198)(72) != 1 && sub_98FB8(&v18) )
  {
    sub_93170(v9, v10, "vCont;t");
  }
  else
  {
    v11 = (int)&v9[sub_93170(v9, v10, "vCont;t:")];
    if ( sub_98FB8(&v18) )
    {
      v12 = ps_getpid_0((int)&v18);
      sub_98F48(&v21, v12, -1, 0);
    }
    else
    {
      v24[0] = v18;
      v24[1] = v19;
      v24[2] = v20;
      result = ((int (__fastcall *)(int, bool (__fastcall *)(int, int, int, _DWORD *), _DWORD *))loc_1E7958)(
                 dword_488CE4,
                 sub_1E13A0,
                 v24);
      if ( !result )
        return result;
      v21 = v18;
      v22 = v19;
      v23 = v20;
    }
    sub_1E29EC(v11, (int)&v9[v10], v21, v22, v23);
  }
  sub_1E7DEC(*v8);
  sub_1E4EB8((char **)v8, (size_t *)v8 + 1, 0, 0, 0);
  result = strcmp(*v8, "OK");
  if ( result )
  {
    v14 = (const char *)sub_23095C(v18, v19, v20);
    sub_946E0("Stopping %s failed: %s", v14, *v8);
  }
  return result;
}
