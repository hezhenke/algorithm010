package main
import(
    "fmt"
)
func firstUniqChar(s string) int {
	var arr  [255]int
	for i:=0;i<len(s);i++{
		arr[s[i]]++
	}
	for i:=0;i<len(s);i++{
		if(arr[s[i]] == 1){
			return i
		}

	}
	return -1;
}

func main(){
    var str = "jacobja"
    fmt.Println(str)
    fmt.Println(firstUniqChar(str))
}
