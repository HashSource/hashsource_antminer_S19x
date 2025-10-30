char *__fastcall sub_4BA48(int a1, int a2, int a3)
{
  int v3; // r5
  int v4; // r0
  char *v5; // r4
  char *v6; // r1
  int v7; // r3
  int v8; // t1
  _DWORD v10[3]; // [sp+Ch] [bp-78h] BYREF
  FILE *stream; // [sp+18h] [bp-6Ch] BYREF
  _BYTE v12[104]; // [sp+1Ch] [bp-68h] BYREF

  v10[0] = a1;
  v10[1] = a2;
  v10[2] = a3;
  v3 = ps_getpid_0(v10);
  if ( sub_9902C(v10) )
    v4 = sub_98F68(v10);
  else
    v4 = ps_getpid_0(v10);
  sub_93170(v12, 100, "/proc/%ld/task/%ld/comm", v3, v4);
  sub_967F0((int)&stream, (int)v12, "r");
  if ( !stream )
    return 0;
  v5 = fgets(byte_4726C8, 16, stream);
  if ( v5 )
  {
    if ( byte_4726C8[0] == 10 )
    {
      v7 = 0;
    }
    else
    {
      v6 = byte_4726C8;
      v7 = 1;
      while ( 1 )
      {
        v8 = (unsigned __int8)*++v6;
        if ( v8 == 10 )
          break;
        if ( ++v7 == 16 )
          goto LABEL_10;
      }
    }
    byte_4726C8[v7] = 0;
  }
LABEL_10:
  if ( stream )
    fclose(stream);
  return v5;
}
