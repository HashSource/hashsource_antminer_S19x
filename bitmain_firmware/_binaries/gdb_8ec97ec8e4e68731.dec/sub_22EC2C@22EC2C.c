int sub_22EC2C()
{
  int v0; // r0
  _DWORD *v1; // r3
  int v2; // r12
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v7; // r4
  int v8; // lr
  int v9; // r12
  int v10; // r1
  int v11; // r2

  v0 = sub_22EBBC();
  LOWORD(v1) = (unsigned __int16)&dword_46DBC0;
  if ( v0 )
  {
    HIWORD(v1) = (unsigned int)&dword_46DBC0 >> 16;
    v7 = v1[2];
    v8 = v1[10];
    v9 = v1[12];
    v10 = v1[14];
    v1[7] = v1[8];
    v11 = v1[16];
    v1[3] = v7;
    v1[9] = v8;
    v1[11] = v9;
    v1[13] = v10;
    v1[15] = v11;
    sub_946E0("Cannot change this setting while the inferior is running.");
  }
  HIWORD(v1) = (unsigned int)&dword_46DBC0 >> 16;
  v2 = v1[9];
  v3 = v1[11];
  v4 = v1[13];
  v5 = v1[15];
  v1[8] = v1[7];
  v1[10] = v2;
  v1[12] = v3;
  v1[14] = v4;
  v1[16] = v5;
  return sub_187A30();
}
