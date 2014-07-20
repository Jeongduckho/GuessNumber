using System;
namespace Stadium {
	class main {
		void Main(string[] args) {
			int i;
			Console.WriteLine("난이도를 선택하세요.");
			Console.WriteLine("-----------------------");
			Console.WriteLine("[1].    두자리수");
			Console.WriteLine("[2].    세자리수");
			Console.WriteLine("[3].    네자리수");
			Console.WriteLine("[4].  다섯자리수");
			Console.WriteLine("[5].  여섯자리수");
			Console.WriteLine("[6].  일곱자리수");
			Console.WriteLine("[7].  여덟자리수");
			Console.WriteLine("[8].  아홉자리수");
			Console.WriteLine("[0].        끝내기");
			Console.WriteLine("----------------------");
			Console.Write(":");
			try {
				i = Console.ReadLine();
				if (i == 0) {
					return;
				}
			} catch {
				Console.WriteLine("숫자만 입력해주세요");
			}
		}
	}
