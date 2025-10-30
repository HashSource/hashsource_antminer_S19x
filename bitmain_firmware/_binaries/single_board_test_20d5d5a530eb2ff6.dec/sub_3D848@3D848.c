int sub_3D848()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0

  sub_70EC4();
  usleep(0x186A0u);
  sub_71AA8(0);
  v0 = usleep(0x249F0u);
  v1 = sub_71C04(v0);
  v2 = sub_71C48(v1);
  v3 = sub_70E7C(v2);
  sub_70E98(v3 & 0xFFFF3F1F | 0x8080);
  sub_70F30(8);
  usleep(0xC350u);
  return 1;
}
